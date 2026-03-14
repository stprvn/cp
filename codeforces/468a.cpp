#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p;
	bool tr=0;
	cin>>n>>p;
	int a[p],b[p];
	for(int i=0;i<p;i++){
		cin>>a[i];
		if(a[i] == n){
			tr = 1;
		}
	}
	for(int i=0;i<p;i++){
		cin>>b[i];
		if(b[i]==n){
			tr = 1;
		}
	}
	(tr == 1) ? cout<<"I become the guy." : cout<<"Oh, my keyboard!";
}