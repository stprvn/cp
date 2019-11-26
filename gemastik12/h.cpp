#include<bits/stdc++.h>
using namespace std;
int n[10];
int k;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
void xas(string str,int n[],int *k){
	stringstream s(str);
	int i=0;
	while(s >> n[i]){
		i++;
	}
	*k = i;
}

int main(){
	memset(n,0,10);
	string x;
	
	getline(cin,x);
	xas(x,n,&k);
	
	int gc = findGCD(n,k);
	cout<<gc<<endl;
	for(int i=0;i<k;i++){
		cout<<n[i]/gc<<" ";
	}
	return 0;
}