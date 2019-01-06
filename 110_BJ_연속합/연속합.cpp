#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;
int a[100001];
int dp[100001];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	dp[1] = a[1];

	for (int i = 2; i <= n; i++)
	{
		dp[i] = max(dp[i - 1] + a[i], a[i]);
	}
	
	int maximum = numeric_limits<int>::lowest();
	for (int i = 1; i <= n; i++)
	{
		if (maximum < dp[i])
			maximum = dp[i];
	}

	cout << maximum << endl;
}