#include<iostream>
using namespace std;
bool v[1001];

int main()
{	
	int n, k;
	cin >> n >> k;
	for (int i = 2; i <= n; i++)
	{
		v[i] = true;
	}
	int cnt = 0;
	int temp = 0;
	for (int i = 2; i <= n; i++)
	{
		if (v[i])
		{
			for (int j = i; j <= n; j += i)
			{
				if (v[j])
				{
					cnt++;
					if (cnt == k)
					{	
						cout << j << endl;
						temp = 1;
						break;
					}
					v[j] = false;
				}
			}
		}
		if (temp)
			break;
	}
	return 0;
}