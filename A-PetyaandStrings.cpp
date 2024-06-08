#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string n,m;
    cin>>n>>m;
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    transform(m.begin(), m.end(), m.begin(), ::tolower);
    cout<<(n>m) - (n<m);
    return 0;
}