#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (grid[i][j] == '.' &&
                grid[i - 1][j] == '.' &&
                grid[i + 1][j] == '.' &&
                grid[i][j - 1] == '.' &&
                grid[i][j + 1] == '.')
            {
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}