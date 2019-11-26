#include<bits/stdc++.h>
using namespace std;
 
int proses(int n,int i,int nn){
	if(nn>0){
		if(nn%(n-nn)==0){
			return proses(n,i+1,nn-1);
		}else{
			return proses(n,i,nn-1);
		}
	}else{
		return i;
	}
}
 
int main(){
	int n;
	cin>>n;
	cout<<proses(n,0,n-1);
	return 0;
}