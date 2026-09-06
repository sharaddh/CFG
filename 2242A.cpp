#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int countAtLeast2 = 0;
        bool possible = false;

        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;

            if (x >= 3)
                possible = true;

            if (x >= 2)
                countAtLeast2++;
        }

        if (possible || countAtLeast2 >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}