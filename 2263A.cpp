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

        int ones = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1)
                ones++;
        }

        int zeros = n - ones;

        if (ones >= zeros)
            cout << "Bessie\n";
        else
            cout << "Elsie\n";
    }

    return 0;
}