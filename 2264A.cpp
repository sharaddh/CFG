// #include <iostream>
// #include <cstdio>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         vector<int> a(n);
//         for (auto &x : a)
//         {
//             scanf("%d", &x);
//         }
//         vector<int> b = a;
//         sort(b.begin(), b.end());
//         bool tirri = false;
//         for (int i = 0; i < n && !tirri; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 swap(a[i], a[j]);
//                 if (a == b)
//                 {
//                     tirri = true;
//                     swap(a[i], a[j]);
//                     break;
//                 }
//                 swap(a[i], a[j]);
//             }
//         }
//         printf(tirri ? "Yes" : "No");
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &x : a)
            cin >> x;

        vector<int> pos;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != i + 1)
                pos.push_back(i);
        }

        bool possible = true;
        for (int i = 0; i < pos.size(); i++)
        {
            if (a[pos[i]] != pos[pos.size() - 1 - i] + 1)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}