_#include<iostream>
using namespace std;
long v[101];

void swap(long &a, long &b)
{
	long temp;
	temp = a;
	a = b;
	b = temp;
}
long Gcd(int a, int b)
{
	if (a > b)
		swap(a, b);
	long q = 1;
	while (1)
	{
		if (a*q == b)
			return a;
		else if (a*q > b)
		{
			break;
		}
		q++;
	}
	q--;
	long r = b - a * q;
	return Gcd(r, a);
}

int main()
{
	long t, n;
	cin >> t;
	while (t--)
	{
		long sum = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> v[i];
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
				sum += Gcd(v[i], v[j]);
		}
		cout << sum << endl;
	}
	return 0;
}