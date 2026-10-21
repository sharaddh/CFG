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

    long long a, b, x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i == 0) a = x;
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (i == 0) b = x;
    }

    long long timeA = a + n - 1;
    long long timeB = b + m - 1;

    cout << (timeA >= timeB ? 1 : 2) << '\n';
}

return 0;

}
