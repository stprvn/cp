#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	if(x[k-1]>0){
		int count = k;
		int j = k-1;
		bool cek=true;
		while(cek && j<n){
			if(x[j]==x[j+1]){
				count++;
				j++;
			}else{
				cek = false;
			}
		}
		cout<<count<<endl;
	}else{
		int count = 0;
		for(int i=0;i<(k-1);i++){
			if(x[i]>0){
				count++;
			}
		}
		cout<<count<<endl;
	}
}