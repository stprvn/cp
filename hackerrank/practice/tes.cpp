#include<bits/stdc++.h>
using namespace std;

int foo(int x[],int a, int b , int i, int j){
	int k=j;
	int ct=0;
	while(k>i-1){
		if(x[k] <= b && !(x[k] <= a)){
			ct++;
		}
		k--;
	}
	return ct;
}

int main(){
	int x[] = {11,10,10,5,10,15,20,10,7,11};
	cout<<foo(x,8,18,3,6)<<endl;
	cout<<foo(x,10,20,0,9)<<endl;
	cout<<foo(x,8,18,6,3)<<endl;
	cout<<foo(x,20,10,0,9)<<endl;
cout<<foo(x,6,7,8,8)<<endl;
}