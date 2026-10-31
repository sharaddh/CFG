#include <bits/stdc++.h>
using namespace std;

bool reachable(int a, int y) {
    return abs(y) <= a && ((a - y) % 2 == 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        if (a == 0) {
            if (b == 0) cout << 0 << '\n';
            else if (b == 1) cout << 1 << '\n';
            else cout << -1 << '\n';
            continue;
        }

        if (reachable(a, b)) {
            cout << a << '\n';
        } else if (reachable(a, b - 1) || reachable(a, b + 1)) {
            cout << a + 1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
