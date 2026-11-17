#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int t1;
		cin>>t1;
		isPrime(t1+1) ? cout<<"Yes\n" : cout<<"No\n";
	}
	return 0;
}
