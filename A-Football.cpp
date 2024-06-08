#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string x;
    cin>>x;
    bool f=false;
    int i=0;
    while (i<=(x.length()-7))
    {
       int j=i+1;
       while (j<i+7)
       {
        if (x[i]==x[j]){
            j++;
        }
        else{
            break;
        }
       }
       if((j-i)==7){
        f=true;
        break ;
       }
       i++;
    }
    if(f && x.length()>6){
        cout<<"YES";
    }
    else
    {cout<<"NO";}
    return 0;
}