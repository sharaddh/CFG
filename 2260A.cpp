#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int zeros = 0;

        for (int &x : a) {
            cin >> x;
            if (x == 0)
                zeros++;
        }

        if (a[0] == 0 && a[n - 1] == 0) {
            cout << 0 << '\n';
        }
        else if (a[0] == 1 && a[n - 1] == 1) {
            cout << (zeros >= 2 ? 2 : -1) << '\n';
        }
        else {
            cout << (zeros >= 2 ? 1 : -1) << '\n';
        }
    }

    return 0;
}