#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int bannans, maxlength;
        cin >> bannans >> maxlength;

        vector<int> banana(bannans);

        for (int i = 0; i < bannans; i++)
        {
            cin >> banana[i];
        }

        vector<int> freq(maxlength + 1, 0);

        for (int i = 0; i < bannans; i++)
        {
            freq[banana[i]]++;
        }

        vector<int> original = freq;

        for (int x = maxlength - 1; x >= 1; x--)
        {
            freq[x] += freq[x + 1];
        }

        int ans = 0;
        for (int x = 1; x <= maxlength; x++)
        {

            int currentcount = freq[x];
            if (2 * x <= maxlength)
            {
                currentcount += original[2 * x];
            }

            ans = max(ans, currentcount);
        }

        cout << ans << endl;
    }

    return 0;
}