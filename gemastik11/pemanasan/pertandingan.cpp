#include<bits/stdc++.h>
#define REP(i, a, b) \
	for (int i = int(a); i < int(b); i++)
using namespace std;

void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 
    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
 
    // Sorting the pair array.
    sort(pairt, pairt + n);
     
    // Modifying original arrays
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}

int main(){
	int N,M,A[100],B[100];
	cin>>N>>M;
	REP(i,0,N){
		cin>>A[i];
	}
	REP(i,0,N){
		cin>>B[i];
	}
	pairsort(A,B,N);

	int j=0;
	while(j<N){
		if(M>=A[j]){
			M+=B[j];
		}else{
			break;
		}
		j++;
	}
	cout<<M<<endl;
	return 0;
}