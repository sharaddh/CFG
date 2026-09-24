#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a(5, 0);
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int l = INT_MIN;
    for(int x : a){
        if(l<x) l = x;
        if(x);
    }
    
    return 0;
}