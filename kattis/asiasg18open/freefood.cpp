#include<bits/stdc++.h>
using namespace std;
int main(){
	 clock_t tStart = clock();
	int n;
	scanf("%d",&n);
	
	set <int, greater <int> > t;
	while(n--){
		int a,b;
		scanf("%d %d",&a,&b);
		for(int j=a;j<=b;j++){
			t.insert(j);
		}
	}
	set <int, greater <int> > :: iterator itr; 
	// for (itr = t.begin(); itr != t.end(); ++itr) 
 //    { 
 //        cout << '\t' << *itr; 
 //    } 
	printf("%d\n",t.size() );
	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}