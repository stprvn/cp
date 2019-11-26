#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	cout<<"tek kotek kotek kotek, anak ayam turun berkotek"<<endl;
	for(int i=N;i>0;i--){
		cout<<"anak ayam turunlah "<<i;
		if(i>1){
			cout<<", mati satu tinggallah "<<i-1<<endl;
		}else{
			cout<<", mati satu tinggallah induknya"<<endl;
		}
		
	}
}