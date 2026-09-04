#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool available[26] = {};

        string s;

        // Initial words
        for (int i = 0; i < n; i++) {
            cin >> s;
            available[s[0] - 'a'] = true;
        }

        vector<string> a(m);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        vector<bool> done(m, false);
        int created = 0;

        while (true) {
            bool changed = false;

            for (int i = 0; i < m; i++) {
                if (done[i])
                    continue;

                bool possible = true;

                for (char c : a[i]) {
                    if (!available[c - 'A']) {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    done[i] = true;
                    created++;

                    available[a[i][0] - 'A'] = true;

                    changed = true;
                }
            }

            if (!changed)
                break;
        }

        if (created == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}