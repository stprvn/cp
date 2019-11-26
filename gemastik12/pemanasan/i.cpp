#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,j;
	cin>>n;
	j = 2*n-1;
	int x[j];
	long sum=0;
	for(int i=0;i<j;i++){
		cin>>x[i];
		if(x[i]<0 && n>0){
			x[i]*=-1;
			n--;
		}
		sum+=x[i];
	}
	cout<<sum;
	return 0;
}