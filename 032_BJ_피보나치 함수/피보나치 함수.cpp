#include<iostream>
using namespace std;

int fibonazi(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	if (n == 0)
	{
		return 0;
	}
	return fibonazi(n - 1) + fibonazi(n - 2);

}

int main()
{
	int n;
	cin >> n;
	int count0, count1;
	count0 = 0;
	count1 = 0;
	cout << fibonazi(n) << endl;

	return 0;

}