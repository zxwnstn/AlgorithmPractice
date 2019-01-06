#include<iostream>
#include<string>
using namespace std;
int dp[5001]{ 0, };

int main()
{
	string s;
	cin >> s;
	int n = s.length();

	if(s[0]-'0' > 0 && s[0] - '0' < 10 )
		dp[1] = 1;

	if (s[1] - '0' > 0 && s[0] - '0' < 10 && (s[0] - 48) * 10 + (s[1] - 48) <= 26)
		dp[2] = dp[1] + 1;
	else
		dp[2] = dp[1];

	cout << dp[1] << " " << dp[2] << endl;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1];
		if (   0 < s[i - 1] - '0' && s[i - 1] - '0' < 10
			&& 0 < s[i - 2] - '0' && s[i - 2] - '0' < 10
			&& (s[i - 2] - '0') * 10 + (s[i - 1] - '0') <= 26)
			dp[i] += dp[i - 2];
	}
	cout << dp[n] << endl;
}