#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	for (auto& x : a) { 
        x = tolower(x); 
    }
    for (auto& y : b) { 
        y = tolower(y); 
    }
    bool sama = true;
    for(int i=0;i<a.length();i++){
    	if(a[i]!=b[i]){
    		if(a[i]<b[i]){
    			cout<<"-1";
    		}else{
    			cout<<"1";
    		}
    		sama = false;
    		break;
    	}
    }
    if(sama == true){
    	cout<<"0";
    }
}