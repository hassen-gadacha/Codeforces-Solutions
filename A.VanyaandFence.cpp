#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int n,h,k=0;
cin>>n>>h;
for(int i=1;i<=n;i++){
    int t;
    cin>>t;
    if (t <= h ){
        k++;
    }else{
        k=k+2;
    }
}
cout<<k;
return 0;
}