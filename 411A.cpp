#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    bool capital = false;
    bool small = false;
    bool digit = false;

    for (int i = 0; i < s.length(); i++) {

        if (s[i] >= 'A' && s[i] <= 'Z') {
            capital = true;
        }

        if (s[i] >= 'a' && s[i] <= 'z') {
            small = true;
        }

        if (s[i] >= '0' && s[i] <= '9') {
            digit = true;
        }
    }

    if (s.length() >= 5 && capital && small && digit) {
        cout << "Correct" << endl;
    }
    else {
        cout << "Too weak" << endl;
    }

    return 0;
}