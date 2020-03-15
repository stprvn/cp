#include<bits/stdc++.h>
using namespace std;

bool gt(unsigned char A[],int i,int j){
	bool cek=0;
	int k=1;
	for(int p=i;p<=j;p++){
		k&=A[p];
	}
	for(int q=i;q<=j;q++){
		if(A[q] > k){
			cek=1;
		}
	}
	return cek;
}

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unsigned char A[n];
		int count=0;
		for(int i=0;i<n;i++) cin>>A[i];

		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				
				// if(gt(A,i,j)==1) count++;
			}

		}
		cout << count<<endl;

	}
}



// {

// }