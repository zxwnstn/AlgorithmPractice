#include<iostream>
using namespace std;
int dp[31];

int main()
{
	int n;
	cin >> n;
	dp[0] = 1;
	dp[2] = 3;
	dp[4] = 11;

	if (n % 2 == 1)
		cout << 0 << endl;
	else
	{
		for (int i = 6; i <= n; i +=2)
		{
			for (int j = 2; j <= i; j += 2)
			{
				if (j == 2)
				{
					dp[i] += dp[i - j] * 3;
				}
				else
				{
					if (i == j)
						dp[i] += 2;
					else
						dp[i] += dp[i - j] * 2;
				}
			}
		}
	}
	cout << dp[n] << endl;

	return 0;
}