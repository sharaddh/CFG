#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;  
        
        long long a1, b1;
        // read all a, only need a[0]
        cin >> a1;
        for (int i = 1; i < n; i++) { long long x; cin >> x; }
        
        cin >> b1;
        for (int i = 1; i < m; i++) { long long x; cin >> x; }
        
        // Bea goes first, so Bea wins if a[0] >= b[0]
        cout << (a1 >= b1 ? 1 : 2) << "\n";
    }
    return 0;
}