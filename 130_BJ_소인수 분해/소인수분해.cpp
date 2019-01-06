#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int temp = 1;
	while (1)
	{
		temp = 1;
		if (n ==1)
			break;
		for (int i = 2; i*i <= n; i++)
		{
			if (n%i == 0)
			{
				temp = 0;
				printf("%d\n", i);
				n /= i;
				break;
			}
		}
		if (temp)
		{
			printf("%d", n);
			break;
		}
	}
	return 0;
}