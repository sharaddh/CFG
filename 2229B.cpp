#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long sum = 0;
    long long base = 0;

    vector<long long> mn(n), mx(n);

    for (int i = 0; i < n; i++) {
        mn[i] = min(a[i], b[i]);
        mx[i] = max(a[i], b[i]);

        sum += mx[i];
        base = max(base, mn[i]);
    }

    long long best = 0;

    for (int i = 0; i < n; i++) {
        long long gain = max(base, mx[i]) - (mx[i] - mn[i]);

        best = max(best, gain);
    }

    cout << sum + best << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

