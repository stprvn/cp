#include<bits/stdc++.h>

using namespace std;
int u[3],v[3];
int ku,kv;

bool nol(int n[],int k){
	int count=0;
	for(int i=0;i<k;i++){
		if(n[i]==0){
			count++;
		}
	}
	return count==k;
}
int cek(int u[],int v[],int ju,int jv){
	if(ju!=jv ){
		return -1;
	}else{
		if(nol(u,ju) || nol(v,jv)){
			return 0;
		}else{
			return 1;
		}
	}
}

void xas(string str,int n[],int *k){
	stringstream s(str);
	int i=0;
	while(s >> n[i]){
		i++;
	}
	*k=i;
}
int norm(int n[],int k){
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=(pow(n[i],2));
	}
	return sqrt(sum);
}


int kali(int u[],int v[],int k){
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=(u[i]*v[i]);
	}
	return sum;
}
int main(){
	// memset(u,0,2);
	// memset(v,0,2);
	string ux,vx;
	ku=0;kv=0;
	getline(cin,ux);
	getline(cin,vx);
	xas(ux,u,&ku);
	xas(vx,v,&kv);
	// cout<<ku<<kv<<endl;
	if(cek(u,v,ku,kv) == -1){
		cout<<"DIMENSI SALAH";
	}else if(cek(u,v,ku,kv) == 0){
		cout<<"TAK TERDEFINISI";
	}else{
		// cout<<cek(u,v,ku,kv);
		float hsl= (float)kali(u,v,ku)/(float)(norm(u,ku)*norm(v,kv));
		printf("%.3f\n",hsl );
	}
}