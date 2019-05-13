#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> seti;
typedef map<string, int> masi;

// loop style , actually i don't like for-loop
#define REP(i, a, b) \
	for (int i = int(a); i < int(b); i++)
#define INF 2000000000
#define MEMSET_INF 127

int main(){
	int i,j,counts=0,temp;
	while(scanf("%d %d",&i,&j) !=EOF){


	if(i>j){
		temp=i;
		i=j;
		j=temp;
	}
	int temp_i=i;
	while(temp_i<=j){
		int count=1;
		int n=temp_i;
		while(n!=1){
			if(n%2==1){
				n=(3*n+1); 
				count++;
			}else{
				n/=2;
				count++;
			}
		}
		if(count>counts) counts=count;
		temp_i++;
	}
printf("%d %d %d\n",i,j,counts);
}
	return 0;
}