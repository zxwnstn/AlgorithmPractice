#include<iostream>

using namespace std;

int main()
{

	int n;
	cin >> n;
	long long i_number, right, left, move;
	long long result = 0;
	
	for (int j = 0; j < n; j++)
	{
		cin >> right >> left >> i_number;
		left = -left;
		move = left + right;
		if (i_number % 2 == 0)
		{
			result = move * (i_number / 2);
		}
		else
			result = move * (i_number / 2) + right;
		cout << result << endl;		
	}

	return 0;
}