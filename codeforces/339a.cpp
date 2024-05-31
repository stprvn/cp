#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s;
	for(int i=0;i<s.length();i+=2){
		t += s[i];
	}
	sort(t.begin(),t.end());
	for(int i=0,j=0;i<s.length();i+=2,j++){
		s[i]=t[j];
	}
	cout<<s;
}