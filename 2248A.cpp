#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool removed1 = false;
        bool removed0 = false;

        for (char c : s)
        {
            if (c == '0' && !removed0)
            {
                removed0 = true;
                continue;
            }

            if (c == '1' && !removed1)
            {
                removed1 = true;
                continue;
            }

            cout << c;
        }

        cout << '\n';
    }

    return 0;
}