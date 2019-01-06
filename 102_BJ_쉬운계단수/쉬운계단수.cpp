#include<iostream>
#include<vector>

using namespace std;


int main()
{
	
	vector<vector<unsigned long long>> v(101, vector<unsigned long long>(10, 0));
	v[1] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	v[2] = { 1, 1, 2, 2, 2, 2, 2, 2, 2, 1 };

	int n;
	cin >> n;
	
	for(int i =3; i<=n; i++)
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
				v[i][j] = v[i - 1][j + 1] % 1000000000;
			else if (j == 9)
				v[i][j] = v[i - 1][j - 1] % 1000000000;
			else
				v[i][j] = (v[i - 1][j-1]+ v[i - 1][j + 1]) % 1000000000;
		}

	unsigned long long sum = 0;

	for (int i = 0; i <= 9; i++)
	{
		sum = (sum + v[n][i])%1000000000;
	}

	cout << sum % 1000000000 << endl;
	return 0;
}