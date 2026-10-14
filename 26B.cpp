#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string t;
    cin >> t;
    int c = 0;
    stack<char> s;
    for (char x : t)
    {
        if (x == '(')
        {
            s.push(x);
        }
        else
        {
            if (!s.empty())
            {
                s.pop();
                c += 2;
            }
        }
    }
    cout << c << endl;
}