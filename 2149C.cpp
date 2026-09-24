#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int missing = 0;

        // 0, 1, ..., k-1 must exist
        for (int i = 0; i < k; i++) {
            if (freq[i] == 0) {
                missing++;
            }
        }

        // k must not exist
        int cntK = freq[k];

        cout << max(missing, cntK) << '\n';
    }

    return 0;
}