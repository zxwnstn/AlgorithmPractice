#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<vector<int>> p(100001, vector<int>(2));
		vector<vector<int>> dp(100001, vector<int>(3, 0));
		int n;
		cin >> n;

		for (int i = 1; i <= n; i++)
			cin >> p[i][0];
		for (int i = 1; i <= n; i++)
			cin >> p[i][1];

		dp[0][0] = 0;
		dp[0][1] = 0;
		dp[0][2] = 0;

		dp[1][0] = 0;
		dp[1][1] = p[1][0];
		dp[1][2] = p[1][1];

		for (int i = 2; i <= n; i++)
		{
			dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][1]), dp[i - 1][2]);
			dp[i][1] = max((dp[i - 1][2] + p[i][0]), (dp[i - 2][2] + p[i][0]));
			dp[i][2] = max((dp[i - 1][1] + p[i][1]), (dp[i - 2][1] + p[i][1]));
		}

		cout << max(max(dp[n][0], dp[n][1]), dp[n][2]) << endl;
	}
	return 0;

}