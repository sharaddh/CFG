#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l;
        char c;
        cin >> l >> c;

        string s;
        cin >> s;

        int coins = 0;

        for (int i = 0; i < l / 2; i++) {
            char left = s[i];
            char right = s[l - 1 - i];

            if (left == right) {
                continue;
            }
            else if (left == c || right == c) {
                coins += 1;
            }
            else {
                coins += 2;
            }
        }

        cout << coins << '\n';
    }
}