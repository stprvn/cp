#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd (ll a,ll b){
	ll res = min(a,b);
	while(res > 0){
		if(a%res == 0 && b%res == 0){
			break;
		}
		res--;
	}
	return res;
}


int main(){

	int t;
	cin>>t;
	while(t--){
		ll n,maxgcd=1;
		cin>>n;
		for(ll i=1;i<n;i++){
			for(ll j=i+1;j<=n;j++){
				maxgcd=max(maxgcd,gcd(i,j));
				// cout<<gcd(i,j)<<endl;
			}
		}
		cout<<maxgcd<<endl;
	}

	
}