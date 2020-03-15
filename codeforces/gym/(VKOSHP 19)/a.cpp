#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	long long jum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		(a[i]%2==1) ? jum+=a[i] : jum+=(a[i]-1) ;
	}
	(jum%2==1)?cout<<jum : cout<<jum-1 ;
	return 0;
}