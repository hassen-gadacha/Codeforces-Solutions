#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,m;
    cin>>n>>m;
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    transform(m.begin(), m.end(), m.begin(), ::tolower);
    cout<<(n>m) - (n<m);
    return 0;
}