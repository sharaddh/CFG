#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long mx = a[0];
    long long mn = a[0];

    long long ans = a[0];

    for (int i = 1; i < n; i++)
    {
        long long x = a[i];

        ans = max(ans, max({x, x + mx, x - mn}));

        long long newMx = x + max({0LL, mx, 2 * mx});
        long long newMn = x + min({0LL, mn, 2 * mn});

        mx = newMx;
        mn = newMn;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}