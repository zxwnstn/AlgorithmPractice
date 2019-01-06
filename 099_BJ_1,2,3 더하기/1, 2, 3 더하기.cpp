#include<iostream>
using namespace std;
int memo[12];

int main()
{
	int n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		memo[1] = 1;
		memo[2] = 2;
		memo[3] = 4;
		for (int i = 4; i <= n; i++)
			memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
		cout << memo[n] << endl;
	}
	return 0;
}