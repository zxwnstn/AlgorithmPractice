#include<iostream>
#include<vector>
using namespace std;
long long dp[201][201];

int main()
{
	int n, k;
	cin >> n >> k;
	dp[0][0] = 1LL;

	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			for (int l = 0; l <= j; l++)
			{
				dp[i][j] += dp[i - 1][j - l];
				dp[i][j] %= 1000000000;
			}
		}
	}
	cout << dp[k][n] << endl;

	return 0;
}