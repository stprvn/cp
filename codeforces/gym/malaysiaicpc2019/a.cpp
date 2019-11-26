#include<bits/stdc++.h>
using namespace std;

const char r = '>';
const char l = '<';
const char u = '^';
const char b = 'v';


char putar(char subs,string fl){
	
	char tmp = subs;
	int i=0;
	while(fl[i] != '\0'){
		if(fl == 'L'){
			if(tmp == r){
			}else if(tmp == l){
				tmp = u;
			}else if(tmp == u){
				tmp = r;
			}else if(tmp == b){
				tmp = l;
			}
		}else{
			if(tmp == r){
				tmp = u; 
			}else if(tmp == l){
				tmp = b;
			}else if(tmp == u){
				tmp = l;
			}else if(tmp == b){
				tmp = r;
			}
		}
		i++;
	}
	return tmp;

}

int main(){

	int n;
	string flip;
	scanf("%d %s",&n,&flip);
	string s[n];
	for(int i=0;i<n;++i){
		scanf("%s",&s[i]);
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			printf("%c", putar(s[i][j] , flip));
		}
		cout<<endl;
	}

	return 0;
}