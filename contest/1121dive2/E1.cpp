#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> cnt(n + 1, 0);

        bool valid = true;

        for (int &x : a)
        {
            cin >> x;

            if (x < 1 || x > n)
                valid = false;
            else
                cnt[x]++;
        }

        if (!valid)
        {
            cout << -1 << '\n';
            continue;
        }
        vector<int> rad(n + 1, 1);

        for (int x = 2; x <= n; x++)
        {
            int temp = x;

            for (int p = 2; p * p <= temp; p++)
            {
                if (temp % p == 0)
                {
                    rad[x] *= p;

                    while (temp % p == 0)
                        temp /= p;
                }
            }

            if (temp > 1)
                rad[x] *= temp;
        }
        vector<int> nextBad(n + 1, n + 1);

        for (int x = 1; x <= n; x++)
        {
            for (int k = x + 1; k <= n; k++)
            {
                if (x % rad[k] == 0)
                {
                    nextBad[x] = k;
                    break;
                }
            }
        }
        vector<vector<int>> best(n + 1, vector<int>(n + 1));

        for (int x = 1; x <= n; x++)
        {
            int z = x;

            for (int y = x; y <= n; y++)
            {
                while (z > 1 && nextBad[z] <= y)
                    z--;

                best[x][y] = z;
            }
        }

        vector<ll> pw2(n + 1, 1);

        for (int i = 1; i <= n; i++)
            pw2[i] = pw2[i - 1] * 2 % MOD;

        vector<int> pref(n + 1, 0);

        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + cnt[i];

        ll ans = 0;

        for (int x = 1; x <= n; x++)
        {
            if (cnt[x] == 0)
                continue;

            ll waysSame = (pw2[ cnt[x]] - 1 + MOD) % MOD;

            ans = (ans + waysSame * x) % MOD;
            for (int y = x + 1; y <= n; y++)
            {
                if (cnt[y] == 0)
                    continue;
                ll waysX = (pw2[cnt[x]] - 1 + MOD) % MOD;
                ll waysY = (pw2[cnt[y]] - 1 + MOD) % MOD;

                int middle =
                    pref[y - 1] - pref[x];

                ll waysMiddle = pw2[middle];

                ll ways =
                    waysX * waysY % MOD *
                    waysMiddle % MOD;

                ans =
                    (ans + ways * best[x][y]) % MOD;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}