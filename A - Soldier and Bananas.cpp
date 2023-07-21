#include<bits/stdc++.h>
using namespace std;
int main() {
    long long k,n,w;
    cin>>k>>n>>w;
    long long dollar;
        dollar=k*w*(w+1)/2;    
    
    if((dollar-n)<0){
        cout<<0;
    }else
    cout<<dollar-n;
	return 0;
}