#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;

    for (int i = 2; i <= n; i++) {
        a.push_back(i);
    }

    a.push_back(1);

    for (int x : a) {
        cout << x << " ";
    }

    cout << '\n';

    return 0;
}