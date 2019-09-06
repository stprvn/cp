/*Algorithm caesar chiper classic to encrypt plaintext -> chipertext  
									decrypt chipertext -> plaintext
Input : string (A-Z)
Limit : max_size of string -> 4294967291
Author: St. Parveen
*/
#include<bits/stdc++.h>
using namespace std;

void encr(int key,string kata){
	//plaintext to chipertext
	int ps;
	for(int i=0;i<kata.length();i++){
		ps = key + (kata[i]-'0');		
		if(ps<=42){
			kata[i]+=key;
		}else{
			kata[i] = 'A' + (ps % 42) - 1;
		}
	}
	cout<<kata;
}

void decr(int key,string kata){
	//chipertext to plaintext
	int ps;
	for(int i=0;i<kata.length();i++){
		ps = (kata[i]-'0') - key;		
		if(ps>=17){
			kata[i]-=key;
		}else{
			kata[i] = 'Z' - (17 % ps) + 1;
		}
	}
	cout<<kata;

}
int main(){
	int rot,pil;
	string kata;

	cout<<"1. encrypt ?\n2. decrypt ?\nChoice : ";
	cin>>pil;
	cout<<"Key  : ";
	cin>>rot;
	cout<<"Text :";
	cin.ignore();
	getline(cin,kata);
	rot%=26;
	(pil==1) ? encr(rot,kata) : decr(rot,kata) ;
	

	return 0;
}