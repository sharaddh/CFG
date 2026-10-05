#include <iostream>
#include <cstdlib>
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

        long long diff = abs(a - b);

        if (a >= b)
            cout << diff + c << '\n';
        else
            cout << max(diff, c - diff) << '\n';
    }

    return 0;
}