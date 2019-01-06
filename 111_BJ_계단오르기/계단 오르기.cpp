#include<iostream>
#include<vector>
using namespace std;
int v[301];
int dp[301][2];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	dp[1][0] = 0;
	dp[1][1] = v[1];

	dp[2][0] = v[2];
	dp[2][1] = v[1]+v[2];

	dp[3][0] = v[1] + v[3];
	dp[3][1] = v[2] + v[3];

	for (int i = 4; i <= n; i++)
	{
		dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + v[i];
		dp[i][1] = dp[i - 1][0] + v[i];
	}

	cout << dp[n][0] << dp[n][1] << endl;
	cout << max(max(dp[n][0], dp[n][1]), dp[n][2]) << endl;
	return 0;
}