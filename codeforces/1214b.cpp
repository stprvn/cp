#include<bits/stdc++.h>
using namespace std;

int main(){

	int p,w,n,count=0;
	cin>>p>>w>>n;
	for(int i=0;i<=p;i++){
		for(int j=0;j<=w;j++){
			if(i+j ==n){
				count++;
			}
		}
	}
	cout<<count;

	return 0;
}