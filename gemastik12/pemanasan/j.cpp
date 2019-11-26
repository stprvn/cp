#include<bits/stdc++.h>
using namespace std;
int n[10];
int k;
void xas(string str,int n[],int *k){
	stringstream s(str);
	int i=0;
	while(s >> n[i]){
		i++;
	}
	*k = i;
}

bool cek(int n[],int k){
	bool f=0;
	for(int i=2;i<k;i++){
		if (n[i]==n[i-1]+n[i-2]){
			f=1;
		}else{
			f=0;
		}
	}
	return f;
}

int main(){
	memset(n,0,10);
	string fib;
	k=0;
	getline(cin,fib);
	xas(fib,n,&k);
	if(cek(n,k)){
		cout<<"BENAR";
	}else{
		cout<<"SALAH";
	}

}