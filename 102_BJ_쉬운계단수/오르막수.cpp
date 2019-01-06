#include<iostream>
#include<vector>
using namespace std;

unsigned long long Sum_to(vector < vector<unsigned long long>> &v, int i , int j)
{
	unsigned long long sum = 0;
	for (int k = 0; k <= j; k++)
		sum += v[i][k]; cout << sum << endl;
	
	return sum;
}
	

int main()
{
	vector<vector<unsigned long long>> v(1001, vector<unsigned long long>(10));
	v[1] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	v[2] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n;
	cin >> n;
	
	for (int i = 3; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int sum = 0;
			for (int k = 0; k <= j; k++)
				sum += v[i - 1][k];
			v[i][j] = sum % 10007;
		}
	}
	unsigned long long sum = 0;
	for (int i = 0; i < 10; i++)
		sum = (sum + v[n][i]) % 10007;

	cout << sum % 10007 << endl;
}