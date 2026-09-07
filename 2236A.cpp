// A. Games on the Train
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        vector<int> a(c);
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < c; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        cout << max - min + 1 << endl;
    }
    return 0;
}