#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int Dr_Agos_pixels;
        cin >> Dr_Agos_pixels;

        int n = Dr_Agos_pixels;

        string s(n, '0');

        if (n == 1)
        {
            s = "1";
        }
        else if (n == 2)
        {
            s = "11";
        }
        else if (n % 6 == 2)
        {
            int L = (n + 1) / 3;

            int p1 = 1;
            int p2 = 1 + L;
            int p3 = 1 + L + (L - 1);

            s[p1 - 1] = '1';
            s[p2 - 1] = '1';
            s[p3 - 1] = '1';
        }
        else
        {
            int N = n + 1;

            int base = N / 3;
            int rem = N % 3;

            int x, y, z;

            if (rem == 0)
            {
                x = base;
                y = base;
                z = base;
            }
            else if (rem == 1)
            {
                x = base;
                y = base + 1;
                z = base;
            }
            else
            {
                x = base + 1;
                y = base;
                z = base + 1;
            }
            int arr[3] = {x, y, z};

            bool done = false;

            for (int mask = 0; mask < 6 && !done; mask++)
            {
                int a, b, c;

                if (mask == 0) a = arr[0], b = arr[1], c = arr[2];
                if (mask == 1) a = arr[0], b = arr[2], c = arr[1];
                if (mask == 2) a = arr[1], b = arr[0], c = arr[2];
                if (mask == 3) a = arr[1], b = arr[2], c = arr[0];
                if (mask == 4) a = arr[2], b = arr[0], c = arr[1];
                if (mask == 5) a = arr[2], b = arr[1], c = arr[0];

                int p1 = a;
                int p2 = a + b;
                bool firstOdd = (p1 % 2 == 1);
                bool secondEven = (p2 % 2 == 0);

                if (firstOdd == secondEven)
                {
                    s[p1 - 1] = '1';

                    if (p2 <= n)
                        s[p2 - 1] = '1';

                    done = true;
                }
            }
        }

        cout << s << '\n';
    }

    return 0;
}