#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define ll long long
ll poin[2];

int main(){
    ll n;
    cin>>n;
    poin[0]=INF;
    poin[1]=INF;
    if(n==1 || n==3){
        cout<<"MUSTAHIL";
    }else if(n==2 ||n==4){
        cout<<n/2<<" 0";
    }else{
        for(ll p=(n/5); p>=0;p--){

            ll g=INF;
            if(n%5 == 0){
                p=n/5;
                g=0;
                if((p*5) + (g*2) == n && p+g <= poin[0]+poin[1]){
                    poin[0]=g;
                    poin[1]=p;
                }
                break;
            }else if((n-(5*p))%2 == 0){

                g=(n-(5*p))/2;
                if((p*5) + (g*2) == n && p+g <= poin[0]+poin[1]){
                    poin[0]=g;
                    poin[1]=p;
                }
            }


            
        }
        cout<<poin[0]<<" "<<poin[1];
    }

}