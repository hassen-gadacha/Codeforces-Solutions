#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;
 
    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }
 
    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
    return 0;
}