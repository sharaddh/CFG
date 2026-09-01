#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > b) swap(a, b);

        if (c > a + b)
            c = a + b;

        cout << c - a << '\n';
    }

    return 0;
}