#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int p = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i % 2 == 0)
            p += x;
        else
            p -= x;
    }

    cout << p << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}