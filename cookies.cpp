#include<bits/stdc++.h>
using namespace std;

long mix(long a,long b){
	long miks=a+2*b;
	return miks;
}

int main(){
	long N,K,sweet;
	int count=0;
	cin>>N>>K;
	long A[10];
	long i=0;
	while(i<N){
		cin>>A[i];
		i++;
	}
	i--;
	while(A[0]<K){
		sort(A,A+i+1);
		if(A[0]<K){
			long miks=mix(A[0],A[1]);
			A[i++]=miks;
			for(int j=0;j<i-2;j++){
				A[j]=A[j+2];
			}
			count++;
		}else{
			break;
		}
	}
	cout<<count<<endl;
}