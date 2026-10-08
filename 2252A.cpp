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

        map<int, int> freq;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            sum += x;
        }

        int bestValue = 0;
        int bestFreq = 0;

        for (auto [value, count] : freq)
        {
            if (count > bestFreq)
            {
                bestFreq = count;
                bestValue = value;
            }
        }

        int other = n - bestFreq;

        int usable = min(bestFreq, other + 2);

        long long ans = sum - 1LL * bestFreq * bestValue + 1LL * usable * bestValue;

        cout << ans << '\n';
    }

    return 0;
}