#include<bits/stdc++.h>
using namespace std;
#define maxint = 100005


int main(){
	int n;
	cin>>n;
	long long A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int Q;
	for(int j=0;j<Q;j++){
		int l,r;
		cin>>l>>r;
		int count=0;
		long long tmp[n];

		for(int i=0;i<n;i++){
			if(A[i] >= l && A[i] <=r){
				tmp[count] = A[i];
				count++;
			}
		}
		int countt = 0;
		for(int i=0;i<=count;i++){
			
		}
		int mx=1;
		long long v1 = tmp[0] + tmp[1];
		for(int i=1;i<count;i++){
			if(tmp[i] + tmp[i+1] == v1){
				mx++;
			}
		}
	}

	return 0;
}