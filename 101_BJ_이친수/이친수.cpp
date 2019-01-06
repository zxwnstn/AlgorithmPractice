#include<iostream>
#include<vector>


int main()
{
	using namespace std;

	int n;
	cin >> n;
	int memo[100];
	memo[1] = 1;
	memo[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	cout << memo[n] << endl;
	return 0;
}