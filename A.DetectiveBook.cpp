#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,x;
    int i=1,k=0, maxi=1;
    cin>>n;
    for(int i=1;i<n+1;i++){
        cin>>x;
        if (maxi==i)
        {
            k++;
        }
        else{
            maxi=max(maxi,x)
            }
    }
    cout<<c;
    return 0;
}