#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    set<char> p= { 'a','e','u','i','o'};
    bool e=true;
    if (s.length()==t.length()){
        for(int i=0;i<s.length();i++){
            if ((p.find(s[i]) != p.end())^(p.find(t[i]) != p.end())){
                e=false;
                break;
            } 
        }
    if (e)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    }
    else{cout << "No" << endl;}
    return 0;
}