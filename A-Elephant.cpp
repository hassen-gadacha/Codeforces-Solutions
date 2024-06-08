#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x;
    cin>>x;
 
    cout<<int(x/5)+min(1,x%5);
    return 0;
}