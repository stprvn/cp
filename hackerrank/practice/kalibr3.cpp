#include<bits/stdc++.h>
using namespace std;

string g(string str){
	int i=0;
	string ns = "";
	while(i<str.length()-1){
		ns = ns+str[i+1];
		i++;
	}
	return ns;
}

string f(string str){
	if(str.length() ==0){
		return "";
	}else if(str.length() == 1){
		return str;
	}else{
		return f(g(str)) + str[0];
	}
}

string h(long long n,string str){
	while(n!=1){
		if(n%2==0){
			n/=2;
		}else{
			n=3*n +1;
		}
		str = f(str);
	}
	return str;
}

int pow(long long x,long long y){
	if(y==0){
		return 1;
	}else{
		return x*pow(x,y-1);
	}
}

int main(){
	cout<<pow(2,100);
	// cout<<h(1,"fruits")<<h(1,"fruits")<<h(1,"fruits");
	// cout<<h(pow(2,1000000),"fruits");
	// cout<<h(pow(2,9850005),"fruits");

}