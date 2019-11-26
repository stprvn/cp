#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,lie=0;
	string k;
	cin>>n;
	while(n--){
		cin>>k;
		if(k=="BOHONG") lie++;
	}
	(lie%2==0) ? cout<<"JUJUR" : cout<<"BOHONG";
}