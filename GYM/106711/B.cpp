#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
string s;

cin >> n >> s;

long long ans = stoll(s);

for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
        ans += (n - i - 1);
    }
}

cout << ans << '\n';

return 0;

}
