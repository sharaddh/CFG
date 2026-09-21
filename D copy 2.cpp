#include <bits/stdc++.h>
using namespace std;

bool possible(const string& s, int cost) {
    set<int> dp;
    dp.insert(0);

    for (char c : s) {
        set<int> ndp;

        for (int cur = -cost; cur <= cost; cur++) {
            if (c == '+' && cur <= 0) continue;
            if (c == '-' && cur >= 0) continue;
            if (c == '0' && cur != 0) continue;

            for (int prev : dp) {
                if (abs(cur - prev) >= 1 && abs(cur - prev) <= cost) {
                    ndp.insert(cur);
                }
            }
        }

        dp = ndp;

        if (dp.empty()) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int qrTNum;
    cin >> qrTNum;

    while (qrTNum--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = -1;

        for (int cost = 1; cost <= 3; cost++) {
            if (possible(s, cost)) {
                ans = cost;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}