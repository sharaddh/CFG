// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long x, y, k;
//         cin >> x >> y >> k;

//         long long monocarp = 0;

//         while (k-- > 0) {
//             monocarp += y % x;
//             x++;
//             y++;
//         }

//         cout << monocarp << '\n';
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long ans = 0;
        long long d = y - x;

        if (d < 0) {
            long long count = min(k, x - y);
            ans += count * (y - x + count + 1);
            x += count;
            y += count;
            k -= count;
        }

        if (k > 0) {
            long long count = min(k, max(0LL, d - x + 1));

            for (long long i = 0; i < count; i++) {
                ans += (y + i) % (x + i);
            }

            x += count;
            y += count;
            k -= count;

            ans += k * d;
        }

        cout << ans << '\n';
    }

    return 0;
}