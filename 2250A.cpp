#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> w(n);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }

        long long maxOdd = LLONG_MIN;
        long long minOdd = LLONG_MAX;
        long long maxEven = LLONG_MIN;
        long long minEven = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 == 1) {
                maxOdd = max(maxOdd, w[i]);
                minOdd = min(minOdd, w[i]);
            } else { 
                maxEven = max(maxEven, w[i]);
                minEven = min(minEven, w[i]);
            }
        }

        bool pattern1 = (minOdd > maxEven + 1);
        bool pattern2 = (minEven > maxOdd + 1);

        cout << (pattern1 || pattern2 ? "YES" : "NO") << "\n";
    }

    return 0;
}