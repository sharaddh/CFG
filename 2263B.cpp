#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k == 0 || k > n) {
            cout << -1 << '\n';
            continue;
        }

        vector<vector<int>> a(n, vector<int>(n));
        int x = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = x++;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << (j == n - 1 ? '\n' : ' ');
            }
        }
    }

};