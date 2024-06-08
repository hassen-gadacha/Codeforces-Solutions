#include <bits/stdc++.h>
using namespace std;
 
int main(){
	#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	#endif
	int t,k=0; cin >> t;
	while(t--){
		char s; cin >> s;
		
		if(s=='D') k++;
		else k--;
}
if(k>0) cout<<"Danik";
else if (k<0) cout<<"Anton";
else cout<<"Friendship";

return 0;
}