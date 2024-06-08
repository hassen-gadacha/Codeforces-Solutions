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
    long long int n,k,x;
    cin>>n>>k>>x;
    if(((k*(2*n-k+1)/2)>=x)&&((k*(k+1)/2)<=x)){

        cout<<"Yes"<<endl;
    }
    else {
    cout <<"No" << endl ;
    }

}
return 0;
}