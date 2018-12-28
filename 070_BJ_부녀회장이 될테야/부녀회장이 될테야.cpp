#include<iostream>
using namespace std;


int SumofSum(int k, int n)
{
	int sum = 0;

	if (k == 1)
		return n * (n + 1) / 2;

	for (int i = 1; i <= n; i++)
	{
		sum += SumofSum(k - 1, i);
	}

	return sum;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		cout << SumofSum(k, n) << endl;
	}
	return 0;
}