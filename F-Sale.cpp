#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int m,n,p=0;
cin>>m>>n;
int v[m];
for(int i=0;i<m;i++){
cin>>v[i];
}
sort(v,v+m);
for(int i=0;i<m;i++){
    if (n>0){
        if (v[i]<0)
        {
            p+=abs(v[i]);
            n--;
        }
    }
    else{
        break;
        }
}
cout<<p;
return 0;
}
