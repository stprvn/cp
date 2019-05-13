#include<bits/stdc++.h>
#define REP(i, a, b) \
	for (int i = int(a); i < int(b); i++)

using namespace std;


int main(){
	int n;
	cin>>n;
	int ugly[n],next;
	ugly[0]=1;
	int next2,next3,next5;
	int i2=0,i3=0,i5=0;
	REP(i,1,n){
		next2=ugly[i2]*2;
		next3=ugly[i3]*3;
		next5=ugly[i5]*5;

		next=min(next2,min(next3,next5));
		ugly[i]=next;
		if(next==next2){
			i2++;
			next2=next*2;
		}
		if(next==next3){
			i3++;
			next3=next*3;
		}
		if(next==next5){
			i5++;
			next5=next*5;
		}

	}
	cout<<ugly;

	return 0;
}