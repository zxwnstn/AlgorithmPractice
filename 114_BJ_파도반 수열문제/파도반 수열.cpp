#include<iostream>
using namespace std;
long long dp[101];

int main()
{
	int t;
	cin >> t;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 5; i <= n; i++)
			dp[i] = dp[i - 1] + dp[i - 5];
		cout << dp[n] << endl;
	}
	return 0;
}