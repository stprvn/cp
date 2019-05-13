#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
	int Q,common;
	cin>>Q;
	vector<long long> v;
	long long val;
	
	for(int j=0;j<Q;j++){
		cin>>common;
		if(common == 1){
			cin>>val;
			v.push_back(val);
		}else if(common == 2){
			cin>>val;
			for(int i=0;i<v.size();i++){
				if(v[i]==val){
					v.erase(v.begin()+i);
				}
			}
		}else{
			sort(v.begin(),v.end());
			cout<<v[0]<<endl;
		}
	}
}