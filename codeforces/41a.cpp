#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	bool reverse = 1;
	cin>>s>>t;
	int j = s.length()-1;
	(s.length()!=t.length()) ? reverse = 0 : reverse = 1;
	for(int i = 0;i<s.length();i++){
		if(s[i]!=t[j]){
			reverse = 0;
			break;
		}
		j--;
	}
	(reverse) ? cout<<"YES" : cout<<"NO";

}