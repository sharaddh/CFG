#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (n < 2 * k) {
            cout << -1 << '\n';
            continue;
        }

        int ans = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'L') {
                ans++;
            }
        }
        for (int i = n - k; i < n; i++) {
            if (s[i] == 'R') {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
