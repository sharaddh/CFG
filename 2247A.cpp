#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        cout << (sum == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}
