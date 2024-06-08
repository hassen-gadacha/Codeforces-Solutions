#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,k;
    cin>>n>>k;
    int s[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s[i]=a;
 
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if (s[i]>=s[k-1]&&s[i]>0)
            c++;
    }
    
   
    cout<<c;
    return 0;
}