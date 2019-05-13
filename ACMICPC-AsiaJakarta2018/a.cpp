#include<bits/stdc++.h>
using namespace std;
string balik(string S){

	return (char)('0' + '1' - S[0]) + string(S.size()-1,S[0]);

}
int main(){
	string k,ends;
	cin>>k;
	int nol=0,satu=0;
	// cout<<strlen(k);
	for(int i=0;i<(k.size());i++){
		k[i]=='0' ? nol++ : satu++ ;
	}
	(nol!=satu) ? ends=k : ends=balik(k);
	cout<<ends;
}
