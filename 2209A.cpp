#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c, k;
        cin >> n >> c >> k;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {

            if (a[i] > c)
                break;

            long long spend = min(k, c - a[i]);

            a[i] += spend;
            k -= spend;

            c += a[i];
        }

        cout << c << '\n';
    }

    return 0;
}
