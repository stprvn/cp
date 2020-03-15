#include<bits/stdc++.h>
using namespace std;

#define nm 5e4+5
#define ll long long

int main(){
	ll t;
	cin>>t;

	while(t--){
		ll n,k,nc=0; 
		cin>>n>>k;
		if(n%k == 0 || k>n){
			cout<<n<<endl;
		}else{

		ll a,b;
		b = n/k +1;
		nc += b*(k/2);
		a=k-(k/2);
		
		nc += a*(n/k);
		cout<<nc<<endl;	
		}
	}		

	
	return 0;
}