#include <bits/stdc++.h>
using namespace std;
 
int main(){
	#ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		sort(s.begin(), s.end());
		if(s=="Timru") cout << "YES\n";
		else cout << "NO\n";
	}
}