#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long MOD = 998244353;

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

        vector<long long> a(n);

        for (long long &x : a)
            cin >> x;

        sort(a.begin(), a.end());
        bool distinct = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                distinct = false;
                break;
            }
        }

        if (!distinct)
        {
            cout << -1 << '\n';
            continue;
        }
        vector<long long> fact(n + 1, 1);

        for (int i = 1; i <= n; i++)
        {
            fact[i] = fact[i - 1] * i % MOD;
        }

        long long suffix = a[n - 1] % MOD;
        long long ans = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            long long choices = n - i - 1;

            long long parentSum =
                (suffix - choices % MOD * (a[i] % MOD) % MOD + MOD) % MOD;
            long long power = MOD - 2;
            long long base = choices % MOD;
            long long inv = 1;

            while (power > 0)
            {
                if (power & 1)
                    inv = inv * base % MOD;

                base = base * base % MOD;
                power >>= 1;
            }

            long long ways = fact[n - 1] * inv % MOD;

            ans = (ans + ways * parentSum) % MOD;

            suffix = (suffix + a[i] % MOD) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}