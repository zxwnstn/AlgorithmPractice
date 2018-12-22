#include<iostream>
using namespace std;
long long tilecase_n[1001];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			tilecase_n[i] = 1;
		else if (i == 2)
			tilecase_n[i] = 3;
		else
			tilecase_n[i] = (tilecase_n[i - 1] + (2 * tilecase_n[i - 2])) % 10007;
	}

	cout << tilecase_n[n];
	return 0;
}
