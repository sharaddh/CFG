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

        long long maxEven = LLONG_MIN;
        long long minOdd = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if ((i + 1) % 2 == 1) {
                minOdd = min(minOdd, x);
            } else {
                maxEven = max(maxEven, x);
            }
        }

        bool ans = (n % 2 == 0 && minOdd > maxEven + 1);

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}
