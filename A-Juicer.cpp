#include<bits/stdc++.h>
using namespace std;
 
int main() {
	#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	#endif
	long long n,b,d,sum=0,count=0;
	cin>>n>>b>>d;
	for(int i=0;i<n;i++){
        int x;
        cin>>x;
	    if(x<=b){
	        sum+=x;
	    }
        if(sum>d){
            count++;
            sum=0;
        }
	}
	cout<<count;
	return 0;
}