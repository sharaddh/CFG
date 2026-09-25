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

        string s = to_string(n);

        int digits = s.size();
        int first = s[0] - '0';

        cout << (digits - 1) * 9 + first << '\n';
    }

    return 0;
}