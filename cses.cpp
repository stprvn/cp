#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	while((cout<<n<<" "),n!=1){		
		n%2==1 ? (n=n*3+1) : (n/=2) ;
	}
}