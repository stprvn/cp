#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,ans=-1;
		cin>>n>>k;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(i&j < k){
					cout<<int(i&j)<<endl;
					ans=max(ans,(i&j));
				}
			}
		}
		cout<<ans<<endl;
	}

}