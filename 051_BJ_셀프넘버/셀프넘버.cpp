#include<iostream>
using namespace std;
int nonselflist[100000]{ 0 };

void selfnum(int n)
{
	while (n <= 9999)
	{
		n = ( n / 1000) + ((n / 100) % 10) + ((n / 10) %10 )+ (n % 10) + n;
		nonselflist[n] = n;
	}
}

int main()
{
	for (int i = 1; i <= 9999; i++)
	{
		if (nonselflist[i] == 0)
		{
			selfnum(i);
		}
	}
	for (int i = 1; i <= 9999; i++)
	{
		if (nonselflist[i] == 0)
			cout << i << endl;
	}
	return 0;
}