#include <iostream>
using namespace std;
 
int main() {
    #ifdef HASSEN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long n, m, a;
    cin >> n >> m >> a;
 
    // Calculate the number of tiles needed for each dimension
    long long tilesInN = (n + a - 1) / a;  // Equivalent to ceil(n/a)
    long long tilesInM = (m + a - 1) / a;  // Equivalent to ceil(m/a)
 
    // Calculate the total number of tiles
    long long totalTiles = tilesInN * tilesInM;
 
    cout << totalTiles << endl;
    return 0;
}