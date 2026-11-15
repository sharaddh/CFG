
#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	stack<int> st;
	vector<bool> printed(n + 1, false);

	for (int i = 0; i < n; i++)
	{
		int doc = i + 1;
		if (s[i] == '1')
		{
			st.push(doc);
		}
		else if (s[i] == '2')
		{
			if (!st.empty())
			{
				printed[st.top()] = true;
				st.pop();
			}
			else
			{
				printed[doc] = true;
			}
		}
		else if (s[i] == '3')
		{
			printed[doc] = true;
		}
	}
	vector<int> ans;

	for (int i = 1; i <= n; i++)
	{
		if (!printed[i])
		{
			ans.push_back(i);
		}
	}
	cout << ans.size() << "\n";

	for (int x : ans)
	{
		cout << x << " ";
	}

	cout << "\n";
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
