#include<iostream>
using namespace std;

int main()
{
	long long n;
	int i = 1;
	cin >> n;

	while (true)
	{
		if (i*(i + 1) / 2 >= n)
		{
			i -= 1;
			break;
		}
		i++;
	}
	n = n - (i * (i + 1) / 2);
	cout << i << " " << n << endl;

	if (i % 2 == 1)
	{
		cout << 1 + (n - 1) << '/' << (i + 1) - (n - 1);
	}
	else
	{
		cout << (i + 1) - (n - 1)  << '/' << 1 + (n - 1);
	}

	return 0;
}