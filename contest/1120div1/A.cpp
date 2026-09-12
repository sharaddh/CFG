#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int k = 1; k <= n; k++) {
            cin >> a[k];
        }
        vector<int> diff(n + 1, 0);

        for (int k = 1; k <= n; k++) {
            long long l = 1LL * a[k] * k;
            long long r = 1LL * (a[k] + 1) * k - 1;

            if (l < n) {
                r = min<long long>(r, n - 1);
                diff[l]++;
                if (r + 1 < n)
                    diff[r + 1]--;
            }
        }

        vector<int> allowed(n, 0);
        int cur = 0;

        for (int x = 0; x < n; x++) {
            cur += diff[x];
            allowed[x] = (cur == 0);
        }

        vector<int> nxt(n + 1, n);
        for (int x = n - 1; x >= 0; x--) {
            if (allowed[x])
                nxt[x] = x;
            else
                nxt[x] = nxt[x + 1];
        }

        vector<int> chosen(n, 0);
        for (int k = 1; k <= n; k++) {
            for (int j = 0; j < a[k]; j++) {
                long long l = 1LL * j * k;
                long long r = min<long long>(1LL * (j + 1) * k - 1, n - 1);

                if (l >= n) break;

                int x = nxt[l];

                if (x <= r) {
                    chosen[x] = 1;
                }
            }
        }

        vector<int> ans;
        for (int x = 0; x < n; x++) {
            if (chosen[x])
                ans.push_back(x);
        }

        cout << ans.size() << '\n';
        for (int x : ans)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}