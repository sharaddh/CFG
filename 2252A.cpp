#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int distinct = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
                distinct++;
        }
        int take = min(n, 2 * distinct);
        long long ans = 0;

        for (int i = n - take; i < n; i++)
            ans += a[i];

        cout << ans << '\n';
    }

    return 0;
}