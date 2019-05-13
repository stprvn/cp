#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,lie=0;
	string k;
	cin>>n;
	while(n--){
		cin>>k;
		if(k=="LIE") lie++;
	}
	(lie%2==0) ? cout<<"TRUTH" : cout<<"LIE";
}