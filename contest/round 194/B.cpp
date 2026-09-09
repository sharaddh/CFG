#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long ans = 0;
        long long i = 0;

        while (i < k && x + i <= d) {
            ans += d % (x + i);
            i++;
        }

        if (i < k) {
            ans += (k - i) * d;
        }

        cout << ans << '\n';
    }

    return 0;
}