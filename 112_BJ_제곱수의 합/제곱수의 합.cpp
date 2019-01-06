#include<iostream>
using namespace std;
int dp[1000001];

int main()
{
	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 1;

	for (int i = 5; i <= n; i++)
	{
		int temp = 1000000;
		for (int j = 1; j*j <= i; j++)
		{
			if (temp > dp[i - j * j] + 1)
				temp = dp[i - j * j] + 1;

		}
		dp[i] = temp;
	}
	cout << dp[n] << endl;
}