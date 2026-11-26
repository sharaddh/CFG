#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    long long cost = 1;

    while (cost <= n && k > 0) {
        long long cnt = min(k, n / cost);

        ans += cnt;
        n -= cnt * cost;

        cost *= 2;
    }

    cout << ans << '\n';
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
