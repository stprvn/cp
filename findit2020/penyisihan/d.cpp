#include<bits/stdc++.h>
using namespace std;
#define mx 100
 
int findMinimumCostPath(int Cost[mx][mx], int M, int N){
       
    int MinCost[M][N]; 
 
    MinCost[0][0] = Cost[0][0];
 
    // initialize first row of MinCost matrix
    for (int i=1; i<N; i++){
        MinCost[0][i] = MinCost[0][i-1] + Cost[0][i];
    }
 
    for (int i=1; i<M; i++){
        MinCost[i][0] = MinCost[i-1][0] + Cost[i][0];
    }
     
    for (int i=1;i<M; i++){
        for (int j=1; j<N; j++){
           MinCost[i][j] = min(MinCost[i-1][j],
                           MinCost[i][j-1]) + Cost[i][j];
        }
    }
 
    return MinCost[M-1][N-1];
     
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int M; 
        cin>>M;

        int Cost[mx][mx];

        for(int i=0;i<M;i++){
            for(int j=0;j<M;j++){
                cin>>Cost[i][j];
            }
        }        cout<<findMinimumCostPath(Cost,M,M);
    }
     
}