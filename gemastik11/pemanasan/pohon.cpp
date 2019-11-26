#include<bits/stdc++.h>
#include<map>
#include<vector>
#define REP(i, a, b) \
	for (int i = int(a); i < int(b); i++)
using namespace std;

int hitung(int a[],int b[],int ax,int ay,int pjg){
	
	map<float,int> st;
	REP(i,0,pjg){
		float al=(float)(b[i]-ay)/(a[i]-ax);
		if(st.count(al) == 0){
			st[al]=1;
		}else{
			st[al]+=1;
		}
			
	}
	return st.size();
}

int main(){
	int n,ax,ay,x[100],y[100];
	int kx1[100],ky1[100],kx2[100],ky2[100];
	int i1=0,i2=0;
	cin>>n>>ax>>ay;
	REP(i,0,n){
		cin>>x[i]>>y[i];
		if(x[i] <= ax){
			kx1[i1]=x[i];
			ky1[i1]=y[i];
			i1++;
		}else if(x[i] > ax){
			kx2[i2]=x[i];
			ky2[i2]=y[i];
			i2++;
		}
	}
	
	cout<<hitung(kx1,ky1,ax,ay,i1)+hitung(kx2,ky2,ax,ay,i2);
	cout<<endl;
}