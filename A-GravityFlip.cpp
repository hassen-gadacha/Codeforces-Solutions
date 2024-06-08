#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int s[n];
    
    for(int i=0;i<n;i++){
        cin>>s[i];
 
    }
    sort(s,s + n);
    for(int i=0;i<n;i++){
        cout<<s[i];
 
    }

    return 0;
}
