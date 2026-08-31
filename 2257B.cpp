#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long m, n;
        cin >> m >> n;

        long long b1 = 0, b2 = 0;
        long long l1 = 0, l2 = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            b1 += x;

            if (i != 0)
                l1 += x - 1;
        }

        for (int i = 0; i < m; i++) {
            long long x;
            cin >> x;

            b2 += x;

            if (i != 0)
                l2 += x - 1;
        }

        cout << (b1 - l1 > b2 - l2 ? 2 : 1) << '\n';
    }

    return 0;
}