#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int A[1001];
vector<int> dp(1001);

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}

	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j <= i; j++)
		{
			if (A[i] > A[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
	}

	cout << *max_element(dp.begin(), dp.end()) << endl;
	return 0;
}