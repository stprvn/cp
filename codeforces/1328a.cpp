#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll a,b;
	int t;
	cin>>t;
	while (t--){
		cin>>a>>b;
		if(a<=b){
			cout<<b-a;
		}else{
			// cout<<a%b;
			if(a%b>>0){
				ll x=(a/b) + 1;
				cout<<(b*x)-a;
			}else{
				cout<<a%b;
			}
		}
		cout<<endl;
	}
}