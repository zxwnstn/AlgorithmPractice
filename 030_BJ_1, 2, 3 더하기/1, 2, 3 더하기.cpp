#include<iostream>
using namespace std;
long numbercase_n[11];


int main()
{
	int n,t;
	cin >> t;
	
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i == 1)
				numbercase_n[i] = 1;
			else if (i == 2)
				numbercase_n[i] = 2;
			else if (i == 3)
			{
				numbercase_n[i] = 4;
			}
			else
				numbercase_n[i] = numbercase_n[i - 1] + numbercase_n[i - 2] + numbercase_n[i - 3];
		}
		cout << numbercase_n[n] << endl;
	}
}