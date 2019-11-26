#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	long w,h;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&w,&h);
		puts(w!=h ? "NO" : "YES");
	}
	
	return 0;
}