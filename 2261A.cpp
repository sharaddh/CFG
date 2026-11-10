#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (first == -1) first = i;
            last = i;
        }
    }

    cout << last - first << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}