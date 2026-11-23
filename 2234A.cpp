#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> b(n);

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    for (int i = 0; i < n - 2; i++) {
        if (b[i + 2] != b[i] % b[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << b[0] << " " << b[1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
