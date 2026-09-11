#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long sumA = 0, sumB = 0;
        long long x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            sumA += x;
        }

        for (int i = 0; i < m; i++) {
            cin >> x;
            sumB += x;
        }

        // Bea attacks first.
        if (sumA >= sumB)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}