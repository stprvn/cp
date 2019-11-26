
#include<bits/stdc++.h>
using namespace std;



void encr(int key,string kata){
	//plaintext to chipertext
	int ps;
	for(int i=0;i<kata.length();i++){
		ps = key + (kata[i]-'0');
		if(kata[i] - '0' < 17 || kata[i]-'0' == (-16)){
			continue;
		}else if(isupper(kata[i])){
			if(ps<=42){
				kata[i]+=key;
			}else{
				kata[i] = 'A' + (ps % 42) - 1;
			}
		}else{
			if(ps<=74){
				kata[i]+=key;
			}else{
				kata[i] = 'a' + (ps % 74) - 1;
			}
		}
		
	}
	cout<<kata;
}

void decr(int key,string kata){
	//chipertext to plaintext
	key*=-1;
	int ps;
	for(int i=0;i<kata.length();i++){
		ps = (kata[i]-'0') - key;	
		if(kata[i] - '0' < 17 ||kata[i]-'0' == (-16)){
			continue;
		}else if(isupper(kata[i])){
			if(ps>=17){
				kata[i]-=key;
			}else{
				kata[i] = 'Z' - (17 % ps) + 1;
			}
		}else{
			if(ps>=49){
				kata[i]-=key;
			}else{
				kata[i] = 'z' - (49 % ps) + 1;
			}
		}	
	}
	cout<<kata;

}
int main(){

	string kata;
	int rot;



	getline(cin,kata);
	// cin.ignore();
	cin>>rot;	
	rot%=26;
	if(rot > 0){

		encr(rot,kata);
	}else{
		decr(rot,kata);
	}
	

	return 0;
}