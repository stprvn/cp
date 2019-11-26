#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int r;
		cin>>r;
		char st[r];
		cin>>st;
		int idmx = -1;
		bool isexist = 0;
		for(int i=0;i<r;i++){
			if(st[i] == '1'){
				isexist = 1;
				idmx = max(idmx,max(i,r-i-1));
			}
		}
		if(isexist == 0){
			cout<<r;
		}else{
			cout<<2*(idmx+1);
		}
		cout<<endl;
	}
	return 0;
}