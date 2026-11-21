#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;

        int ans1 = (n + x + y - 1) / (x + y);

        int ans = ans1;

        if (z * x < n) {
            int remaining = n - z * x;

            int additional = (remaining + x + 10 * y - 1)
                           / (x + 10 * y);

            int ans2 = z + additional;

            ans = min(ans, ans2);
        }

        cout << ans << '\n';
    }

    return 0;
}
