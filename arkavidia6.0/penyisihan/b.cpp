#include<bits/stdc++.h>
using namespace std;
int mx = 1000000;
int main(){
	
	int n;
	cin>>n;
	long h[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	int find;
	cin>>find;
	long prime[mx];
	memset(prime,mx,mx);
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<mx/n;j++){
			prime[k]=h[i]*j;
			k++;
		}
	}
	sort(prime,prime+mx);
	for(int i=0;i<=k;i++){
		if(find==prime[i]) cout<<i+1;

	}
	return 0;
}