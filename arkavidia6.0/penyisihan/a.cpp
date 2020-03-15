#include <bits/stdc++.h>
using namespace std;
long long mx = 1e18;
int main(){
    long long a,b;

    cin>>a>>b;

    long long x[b][a+1];
    for(int i=0;i<b;i++){
    	long long tmp=a;
		for(int j=0;j<a+1;j++){
			x[i][j]=tmp;
			tmp--;
		}
	}
 //    for(int i=0;i<b;i++){
 //    	// long long tmp=a;
	// 	for(int j=0;j<a+1;j++){
	// 		// x[i][j]=tmp;
	// 		// tmp--;
	// 		cout<<x[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	for(int i=0;i<b;i++){
		long long sum=0;
		for(int j=0;j<a+1;j++){
			sum+=x[i][j];
		}
		if(sum==a){
			long long xr=x[i][0];
			for(int j=1;j<a+1;j++){
				xr^=x[i][j];
			}	
			mx=min(xr,mx);
		}
	}
	cout<<mx;
}