#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int test;
        cin >> test;
        vector<int>r;
        int c = 0;
        while(test != 0){
            int rmd = test%10;
            if(rmd!=0){
                if(c!=0){
                    r.push_back(rmd*c);
                }
            }
            test/=10;
            c++;
        }
        cout<<r.size()<<endl;
    }
    return 0;
}