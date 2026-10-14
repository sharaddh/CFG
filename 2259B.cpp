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

        unordered_map<long long, int> freq;
        long long oddCnt = 0;
        long long evenParity[2] = {0, 0};

        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            ans = max(ans, ++freq[a]);

            if (a & 1) {
                oddCnt++;
            } else {
                long long m = a / 2;
                evenParity[m & 1]++;
            }
        }

        ans = max<long long>(ans, oddCnt);
        ans = max<long long>(ans, max(evenParity[0], evenParity[1]));

        cout << ans << '\n';
    }

    return 0;
}