#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        if (b <= 3 * a) {
            cout << (n / 3) * b + (n % 3) * a << '\n';
        } 
        else {
            cout << n * a << '\n';
        }
    }

    return 0;
}

