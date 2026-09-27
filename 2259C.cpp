#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> ones;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 1)
                ones.push_back(i);
        }

        if (ones.empty()) {

            if (n >= 2) {
                a[0] = 1;
                a[n - 1] = 1;
            }
        }

        else if (ones.size() == 1) {

            int p = ones[0];
            int far = -1;
            int maxDist = -1;

            for (int i = 0; i < n; i++) {
                if (a[i] == -1) {

                    int dist = abs(i - p);

                    if (dist > maxDist) {
                        maxDist = dist;
                        far = i;
                    }
                }
            }

            if (far != -1)
                a[far] = 1;
        }

        else {

            int bestGap = -1;
            int bestLeft = -1;
            int bestRight = -1;

            for (int i = 0; i + 1 < ones.size(); i++) {

                int gap = ones[i + 1] - ones[i];

                if (gap > bestGap) {
                    bestGap = gap;
                    bestLeft = ones[i];
                    bestRight = ones[i + 1];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }

        for (int x : a)
            cout << x << ' ';

        cout << '\n';
    }

    return 0;
}