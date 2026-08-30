#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long answer;
        
        if (n == 1) {
            answer = a[0];
        } else if (n == 2) {
            answer = gcd(a[0], a[1]);
        } else {
            answer = gcd(a[0], a[n-1]);
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}
