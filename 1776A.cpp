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

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int oolo = 0;

        oolo += a[0] / 120;

        for (int i = 1; i < n; i++) {
            int gap = a[i] - a[i - 1];
            oolo += gap / 120;
        }

        oolo += (1440 - a[n - 1]) / 120;

        if (oolo >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}