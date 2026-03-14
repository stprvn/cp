#include<bits/stdc++.h>
using namespace std;

int main(){
	long k,n,w,borrow,total=0;
	cin>>k>>n>>w;

	for(int i=1;i<=w;i++){
		total+=i*k;
	}
	borrow = total-n;
	if(borrow<0){
		borrow = 0;
	}
	cout<<borrow;
}