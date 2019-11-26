#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	
		ll n,p,w,d,x,y,z;
		cin>>n>>p>>w>>d;
		for(y=0;y<n;y++){
			x = (p-(y*d));
			if(x%w == 0){
				x/=w;
				z=n-x;
				cout<<x<<" "<<y<<" "<<z<<endl;
				paw=1;
			}else{
				cout<<-1;

			}
		}

	
}