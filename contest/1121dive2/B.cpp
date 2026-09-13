#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);

        for (long long &x : a)
        {
            cin >> x;
        }

        if (m == 1)
        {
            long long ans = LLONG_MIN;

            for (long long x : a)
            {
                ans = max(ans, x);
            }

            cout << ans << '\n';
            continue;
        }
        priority_queue<long long> pq;

        long long sum = 0;
        long long ans = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            if ((int)pq.size() == m - 1)
            {
                ans = max(ans, 1LL * m * a[i] - sum);
            }

            pq.push(a[i]);
            sum += a[i];

            if ((int)pq.size() > m - 1)
            {
                sum -= pq.top();
                pq.pop();
            }
        }

        cout << ans << '\n';
    }

    return 0;
}