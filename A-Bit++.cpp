#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    string s[n];
    int c(0);
    for(int i=0;i<n;i++){
        cin>>s[i];
 
    }
    for(int i=0;i<n;i++)
    {
        if (s[i]=="X--"||s[i]=="--X"){
            c--;
 
        }
        else{
            c++;
        }
    }
    
   
    cout<<c;
    return 0;
}