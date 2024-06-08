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
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
    char k;
    cin>>k;
    
    if (k=='Q')
        {
            v.push_back(1);
        }
        else if(not(v.empty())){
            v.pop_back();
        }
        else{
            continue;}
        
}
if((v.empty())){
    cout<<"Yes"<<endl;}
    else {
    cout <<"No" << endl ;
    }
}
return 0;
}