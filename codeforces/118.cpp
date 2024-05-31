#include<bits/stdc++.h>
using namespace std;
string hapusvowel(string k){
	string l;
	for(int i=0;i<k.length();i++){
		if(k[i]!='a'&&k[i]!='e'&&k[i]!='i'&&k[i]!='o'&&k[i]!='u'&&k[i]!='y'){
			l+=k[i];
		}
	}
	return l;
}

int main(){
	string k;
	cin>>k;
	for (auto& x : k) { 
        x = tolower(x); 
    }
	string jawab = hapusvowel(k);
	string jj;

	if(jawab.length()>0){

		for(int i=0;i<jawab.length();i++){
			jj+='.';
			jj+=jawab[i];
			
		}
		cout<<jj;
	}

}