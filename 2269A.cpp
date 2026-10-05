#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int standings = 1;
        int card = 0;

        while (n--)
        {
            standings = standings == 1 ? 2 : standings * 2;

            if (k > 1)
            {
                card += standings;
                k--;
                standings = 1;
            }
        }

        card += standings;

        cout << card << endl;
    }

    return 0;
}