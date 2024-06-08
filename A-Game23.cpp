#include <iostream>
using namespace std;
 
int main() {
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n, m;
    cin >> n >> m;
 
    if (m % n != 0) {
        cout << -1 << '\n';
        return 0;
    }
 
    int steps = 0;
    int x = m / n;
 
    while (x % 2 == 0) {
        x /= 2;
        steps++;
    }
 
    while (x % 3 == 0) {
        x /= 3;
        steps++;
    }
 
    if (x == 1) {
        cout << steps << '\n';
    } else {
        cout << -1 << '\n';
    }
 
    return 0;
}