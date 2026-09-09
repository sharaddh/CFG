#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) zeros++;
        }

        if (zeros < 2) {
            cout << -1 << '\n';
        }
        else if (a[0] == 0 && a[n - 1] == 0) {
            cout << 0 << '\n';
        }
        else if (a[0] == 0 || a[n - 1] == 0) {
            cout << 1 << '\n';
        }
        else {
            cout << 2 << '\n';
        }
    }

    return 0;
}