#include<bits/stdc++.h>
using namespace std;

int lup(long long a[],int sekarang){
	if(sekarang == 0){
		return a[0];
	}else{
		for(int i=0;i<sekarang-1;i++){
			a[i] = a[i]^a[i+1];
		}
		lup(a,sekarang-1);
	}	
}


int main(){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<lup(a,n);

}