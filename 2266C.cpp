#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int first1 = -1;
        int last0 = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && first1 == -1)
                first1 = i;

            if (s[i] == '0')
                last0 = i;
        }
        if (first1 == -1 || last0 == -1 || first1 > last0) {
            cout << 0 << '\n';
            continue;
        }

        cout << last0 - first1 + 1 << '\n';
    }

    return 0;
}