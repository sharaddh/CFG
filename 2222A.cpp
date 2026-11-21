#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        b[i] = 100 / a;
    }

    sort(b.begin(), b.end());

    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (b[i] > sum + 1) {
            cout << "No\n";
            return;
        }

        sum += 100;
    }

    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
