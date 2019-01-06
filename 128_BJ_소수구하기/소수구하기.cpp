#include<iostream>
#include<stdio.h>
using namespace std;
bool v[1000001];

int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 2; i <= n; i++)
		v[i] = true;

	for (int i = 2; i*i <= n; i++)
	{
		if (v[i])
		{
			for (int j = i; j <= n; j += i)
			{
				if (j == i)
					continue;
				else if (v[j])
					v[j] = false;
			}
		}
	}
	for (int i = m; i <= n; i++)
	{
		if (v[i])
			printf("%d\n", i);
	}
	return 0;

}