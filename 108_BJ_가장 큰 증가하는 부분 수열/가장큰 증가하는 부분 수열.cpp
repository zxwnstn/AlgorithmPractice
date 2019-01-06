#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> a(1001);
	vector<int> dp(1001);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	dp[1] = a[1];
	for (int i = 2; i <= n; i++)
	{
		dp[i] = a[i];
		for (int j = 1; j <= i; j++)
		{
			if (a[j] < a[i] && dp[i] < dp[j] + a[i])
				dp[i] = dp[j] + a[i];
		}
	}
	cout << *max_element(dp.begin(), dp.end()) << endl;

	return 0;

}
