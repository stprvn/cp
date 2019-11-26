#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main(){

	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	// for(int i=0 ;i<n;++i){
	// 	printf("%ld\n",a[i] );
	// }
	long long sum=0;
	for(int i=0;i<n;i++){
		
		sum=(sum + 2*a[i]*b[i]);
	}
	cout<<sum;
	return 0;
}