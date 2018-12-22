#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int output, x;

	x = n / 5;
	if (n % 5 == 3)
	{
		output = x + 1;
	}
	else if (n % 5 == 0)
	{
		output = x;
	}
	else if (n % 5 == 1)
	{
		output = x - 1 + 2;
	}
	else if (n % 5 == 2)
		if (n < 10)
		{
			output = -1;
		}
		else
			output = x - 2 + 4;
	else if (n % 5 == 4)
		if (n == 4)
		{
			output = -1;
		}
		else
			output = x - 1 + 3;
		
	cout << output << endl;
	
	return 0;
}