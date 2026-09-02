// A. Be Positive
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
        vector<long long> a(n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int neg = 0;
        int zero = 0;
        for (int x : a)
        {
            if (x == -1)
                neg++;
            if (x == 0)
                zero++;
        }
        c += zero;
        c += (neg % 2) * 2;
        cout << c << endl;
    }
    return 0;
}