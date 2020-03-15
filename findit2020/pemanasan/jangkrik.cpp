#include<bits/stdc++.h>
using namespace std;
int main(){

	int xa,xb,va,vb,n;
	cin>>xa>>va>>xb>>vb;
	if(va>vb){
		n=vb*(xb-xa)/(va-vb);
		(n>0) ? puts("YES") : puts("NO");
	}else{
		puts("NO");
	}
	return 0;
}