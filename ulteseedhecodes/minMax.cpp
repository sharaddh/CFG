#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(10, 0);
    for (int i = 0; i < 10; i++)
    {

        cin >> a[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (int x : a)
    {
        if(min>x) min = x;
        if(max<x) max = x;
    }
    cout<<min<<max<<endl;
    return 0;
}