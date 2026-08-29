#include <iostream>
using namespace std;

int main() {

    int abc[3];

    cin >> abc[0] >> abc[1] >> abc[2];

    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        if (x > abc[1] && x < abc[2]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}