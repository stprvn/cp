#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	unsigned char a[4];
	for(int i=0;i<4;i++){
		cin>>a[i];
		
	}
	k=a[0];
	for(int i=1;i<4;i++){
		k&=a[i];

	cout<<k<<endl;
	}
	// printf("%d\n", a & b); 
	return 0;
}