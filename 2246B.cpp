#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << -1 << '\n';
            continue;
        }

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        for (int i = 1; i <= n; i++) {
            cout << fact / i << " ";
        }
        cout << '\n';
    }

    return 0;
}