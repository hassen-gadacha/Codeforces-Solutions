#include <bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main(){
	#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	#endif
int a,b,k=0; cin >> a>>b;
while(a<=b){
    a*=3;
    b*=2;
    k++;
}
cout<<k;
return 0;
}