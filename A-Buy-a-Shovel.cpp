#include <iostream>
using namespace std;
 
int main() {
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
        int t=-1,k,r;
        cin>>k>>r;
        for (int i = 1; i < 10; i++) {
            if(((i*k)%10==r)or((i*k)%10==0)){
                 t=i;
                 break;
                 }
        
        }
        
        if (t > 0) {
            cout<< t;
        }
        else{
            cout<< 10;
        }

    return 0;
}