#include <bits/stdc++.h>
using namespace std;
void pairsort(long long a[], long long b[], int n)
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
    int N,aw;
    long long P[10],Q[10];
    bool menang=false;
    int ng=0;
    cin>>N;
    cin>>aw;
    for(int i=0;i<N-1;i++){
        cin>>P[i];
        Q[i]=P[i];
        if(Q[i]<0){
            Q[i]*=-1;
        }
    }
    int sum=0;
    for(int i=0;i<N-1;i++){
        sum+=P[i];
    }
    if(sum<=aw){
        cout<<"menang\n"<<aw<<" ";

        pairsort(Q,P,N-1);
        for(int i=0;i<N-1;i++){
            cout<<P[i]<<" ";
        }
    }else{
        cout<<"kalah";

    }

    cout<<endl;
    return 0;
}

