#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt = 0;

        for (char c : s) {
            if (c == 'Y') {
                cnt++;
            }
        }

        cout << (cnt <= 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}
