#include <bits/stdc++.h>
using namespace std;

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = a[0];
        long long ans = LLONG_MIN;

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, max(a[i] - sum,
                               max(a[i], a[i] + sum)));

            a[i] = max(a[i] - sum,
                       max(a[i], a[i] + sum));

            sum += a[i];
        }

        cout << max(ans, a[0]) << '\n';
    }

    return 0;
}
