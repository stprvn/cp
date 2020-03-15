#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long c;
	 	while(b>1){
  			c=a*c;
  			b--;
  			cout<<c<<" ";
 		}
 		c=pow(a,c);
 		cout<<c<<" ";
		string s=to_string(c);
		if(c<10){
			cout<<"0"<<s[s.length()-1];
		}else{
			cout<<s[s.length()-2]<<s[s.length()-1];
		}cout<<endl;

	}
	return 0;
}