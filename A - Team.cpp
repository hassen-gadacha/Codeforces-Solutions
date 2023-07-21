#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int p = 0;
    
    while (n--) {
        int jet[3];
        for (int i = 0; i < 3; i++) {
            cin >> jet[i];
        }
        
        int k = 0;
        for (int j = 0; j < 3; j++) {
            if (jet[j] == 1) {
                k++;
            }
        }
        
        if (k > 1) {
            p++;
        }
    }
    
    cout << p << endl;
    return 0;
}