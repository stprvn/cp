#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n],b[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<endl;
	bool cek=1;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			a[i]=a[i]/2;
		}else{
			

			if(a[i]<0){		
				if(cek==1){
					a[i]=a[i]/2;
					cek=0;
				}else{
					a[i]=(a[i]/2)-1;
					cek=1;
				}
				
			}else{
				if(cek==1){
					a[i]=a[i]/2 +1;
					cek=0;
				}else{
					a[i]/=2;
					cek=1;
				}
				
			}
		}
		cout<<a[i]<<endl;
	}

	return 0;
}