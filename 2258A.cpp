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

    int first, last, x;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (i == 0) first = x;
        last = x;
    }

    cout << gcd(first, last) << '\n';
}

return 0;

}
