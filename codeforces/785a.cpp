#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,hitung=0;
	string figures;
	cin>>n;
	while(n>0){
		cin>>figures;
		if(figures=="Tetrahedron"){
			hitung+=4;
		}else if(figures=="Cube"){
			hitung+=6;
		}else if(figures=="Octahedron"){
			hitung+=8;
		}else if(figures=="Dodecahedron"){
			hitung+=12;
		}else if(figures=="Icosahedron"){
			hitung+=20;
		}
		n--;
	}
	cout<<hitung;
 
	return 0;
}