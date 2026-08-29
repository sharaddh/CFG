// A. Odd Eraser
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
 
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << a[0] << endl;
        }
        else {
            cout << gcd(a[0], a[n - 1]) << endl;
        }
    }

    return 0;
}