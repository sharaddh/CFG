// B. Palindrome, Twelve and Two Terms
#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        long long n;
        cin >> n;

        if (n == 10) {
            cout << -1 << endl;
        }
        else if (n % 12 == 10) {
            cout << 22 << " " << n - 22 << endl;
        }
        else {
            long long a = n % 12;
            long long b = n - a;

            cout << a << " " << b << endl;
        }
    }

    return 0;
}