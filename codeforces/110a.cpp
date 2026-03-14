#include<bits/stdc++.h>
using namespace std;


int main(){
	string lucknumb;
	bool luck = 1;
	int ct =0;
	cin>>lucknumb;
	// cout<<lucknumb[0];
	for(int i=0;i<lucknumb.length();i++){
		if(lucknumb[i]=='4'||lucknumb[i]=='7'){
			ct++;
		}
	}
	// cout<<ct<<endl;
	if(ct==4||ct==7){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}