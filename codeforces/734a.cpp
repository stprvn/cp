#include<bits/stdc++.h>
using namespace std;

int main(){
	string win;
	int games,ctA = 0,ctD = 0;
	cin>>games;
	cin>>win;
	for(int i=0;i<games;i++){
		if(win[i]=='A'){
			ctA++;
		}else{
			ctD++;
		}
	}
	if(ctA == ctD){
		cout<<"Friendship";
	}else{
		if(ctA>ctD){
			cout<<"Anton";
		}else{
			cout<<"Danik";
		}
	}
}