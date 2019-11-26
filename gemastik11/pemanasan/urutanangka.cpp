#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void balikrut(int x[],int panjang){
	for(int i=0;i<panjang;i++){
		if(x[i]<10){
			x[i]*=10;
		}else{
			int kebalikan=0;
			int n=x[i];
			do{
				kebalikan=(kebalikan*10)+(n%10);
				n=n/10;
			}while(n>0);
			x[i]=kebalikan;
		}
	}
	sort(x,x+panjang);
}
int main(){
	int n;
	cin>>n;
	int x[1000];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	balikrut(x,n);
	sort(x,n);
	for(int i=0;i<n;i++){
		if(x[i]%10==0) x[i]/=10;
		cout<<x[i]<<endl;
	}
}