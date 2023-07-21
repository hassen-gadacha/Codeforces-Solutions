#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
 
    cout<<int(x/5)+min(1,x%5);
    return 0;
}