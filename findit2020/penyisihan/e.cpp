#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x=pow(7,7);
		cout<<x<<endl;
	string s=to_string(x);
	cout<<s[s.length()-2]<<s[s.length()-1];
	return 0;
}