#include<bits/stdc++.h>
using namespace std;
#define inf 1e6
int n[105];
int minf = inf;
int maxf = -inf;

void xas(string str,int n[],int *k){
    stringstream s(str);
    int i=0;
    while(s >> n[i]){
        i++;
    }
    *k = i;
}

int main(){
	string str;
	int k;
	getline(cin,str);
	xas(str,n,&k);
	
	int c=0;
	for(int i=0;i<k;i++){
		c+=n[i];
	}

	if(c%2 == 0){
		cout<<"MUNGKIN";
	}else{
		cout<<"MUSTAHIL";
	}

	return 0;
}