#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	while(t--){
		int hh,mm,m=0;
		cin>>hh>>mm;
		m += (60-mm);
		hh++;
		m += (24-hh) * 60;
		cout<<m<<endl;	

	}

	// printf(" \n");
	return 0;
}