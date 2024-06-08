#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    
    int v[3];
    for(int i=0;i<3;i++){
    cin>>v[i];
    }
    if (v[x-1]!=0){
        if (v[v[x-1]-1]!=0)
        {
            cout<<"YES"<<endl;
        }
        else{
            
            cout<< "NO" << endl;}
        }
        else{
            cout<<"NO"<<endl;}

}
return 0;
}


