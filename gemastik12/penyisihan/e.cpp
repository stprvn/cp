#include<bits/stdc++.h>
using namespace std;

struct pg{
	int x,y;
	long long l;
};

long long luas(int x,int y,int xx,int yy){
	return (xx-x) * (yy-y);
}

int main(){
	int x1,x2,y1,y2;
	int n;
	cin>>n;
	pg p[n];
	for(int i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2;
		p[i].l = luas(x1,y1,x2,y2);
		p[i].x = (x2-x1);
		p[i].y = (y2-y1);
		if(p[i].x <= p[i].y){
			swap(p[i].x , p[i].y);
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(i!=j && (p[j].x > )){
				count ++
			}
		}
	}
	cout<<count;


	return 0;
}