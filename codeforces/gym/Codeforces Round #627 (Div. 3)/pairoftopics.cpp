//d
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,good=0;
	cin>>n;
	long long a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]-b[i] < a[j]-b[j]) good++;
		}
	}
	cout<<good<<endl;
	return 0;
}