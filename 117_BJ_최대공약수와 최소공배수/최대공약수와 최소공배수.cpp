#include<iostream>
using namespace std;

long Gcd(int a, int b)
{
	int q = 1;
	while (1)
	{
		if (q*a == b)
			return a;
		else if (q*a > b)
			break;
		q++;
	}
	q--;
	int r = b - q * a;
	return Gcd(r, a);
}

int main()
{
	long a, b;
	cin >> a >> b;
	long gcd;
	if (a > b)
		gcd = Gcd(b, a);
	else
		gcd = Gcd(a, b);

	cout << gcd << endl;
	cout << a * b / gcd << endl;
}
