#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        vector<int> towers(n, 0);

        for (int &x : towers) {
            scanf("%d", &x);
        }

        int ans = 0;

        for(int i = 1; i<towers.size();i++){
		if(towers[i] > towers[i-1]) towers[i] = towers[i-1];
	}
	for(auto x: towers){
		ans+=x;
	}
        printf("%d\n", ans);
    }

    return 0;
}
