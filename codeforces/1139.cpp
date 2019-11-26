
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int n;
	cin>>n>>str;
	int count=0; //counting the even substring
	for(int l=str.size()-1;l>=0;l--){
		if(str[l]%2==0){
			count+=(l+1);
		}
	}
	cout<<count;
	return 0;
}