#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int Gcd(int a, int b)
{
	if (a > b)
		swap(a, b);

	if (b % a == 0)
	{
		return a;
	}
	else
		return Gcd(b%a, a);
}

int main()
{
	int t;
	cin >> t;
	int a, b;
	while (t--)
	{
		cin >> a >> b;
		int gcd = Gcd(a, b);
		cout << a * b / gcd << endl;
	}
	return 0;
}