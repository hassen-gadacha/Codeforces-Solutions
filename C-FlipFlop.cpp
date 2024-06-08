#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int j=0,a;
cin>>a;
while(j<a){
    int n;
    cin>>n;
    int p[n];
    
    bool t=true,m=false;
    cin>>p[0];
    int s=p[0];
    int k=p[0];
for(int i=1;i<n;i++){
    
    cin>>p[i];
    
    
    if ((p[i]==-1)&&(k==p[i])&&(t)){
        s=s+3;
        t=false;
        m=false;
        
        
    }
    else if((p[i]==-1)&&(t)){
        k=p[i];
        s--;
        m=false;
      
        
    
    }
    else if(p[i]==-1){
        s--;
        k=p[i];
        
    }
    else if(t){
        s++;
        m=true;
       
    }
    else{
        s++;
        k=p[i];
        
    }
    }
    j++;

    if (m){
        s-=4;
    }
    if(j==(a)){
        cout<<s;
    }
    else{
        cout<<s<<endl;
    }
    
}
return 0;
}