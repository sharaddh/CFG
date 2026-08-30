#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> books(n);

        for (int i = 0; i < n; i++)
        {
            cin >> books[i];
        }

        long long sum = 0;
        long long required = 0;
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            sum += books[i];
            required += (i + 1);

            if (sum < required)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}