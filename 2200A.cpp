// A Eating gmae
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int a[10];

        int max = 0;

        for(int i = 0; i<n ; i++){
            cin >> a[i];
            if(a[i] > max){
                max = a[i];
            }
        }
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(a[i] == max){
                ans++;
            }
        }
        cout<< ans << endl;
    }
    return 0;
}