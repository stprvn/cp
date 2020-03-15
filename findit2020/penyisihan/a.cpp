#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int p[n],a[q],b[q];
	for(int i=0;i<n;i++){
		cin>>p[i];
		p[i]--;
	}
	for(int i=0;i<q;i++){
		cin>>a[i]>>b[i];
		int itr1=a[i]-1,itr2=b[i]-1;
		while(itr1!=1){
			cout<<itr1;
			itr1 = p[itr1];
		}
		while(itr2!=1){
			cout<<itr2;
			itr2 = p[itr2];
		}
		// cout<<itr1<<itr2;
		// (itr1==itr2) ? puts("Ya") : puts("Tidak");

	}

	
	return 0;
}