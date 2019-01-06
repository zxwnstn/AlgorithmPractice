#include<iostream>
using namespace std;
int price_list[1000000];

long long solve(int *pricelistf, int price_n )
{
	int max = 0;
	long long celling = 0;
	for (int i = price_n - 1; i >= 0; i--)
	{
		if (max < pricelistf[i])
		{
			max = pricelistf[i];
		}
		celling += max - pricelistf[i];
	}

	return celling;
}


int main()
{
	int t;
	cin >> t;
	int price_number;
	

	for (int tc = 1; tc <= t; tc++)
	{
		cin >> price_number;
		for (int i= 0 ; i < price_number; i++)
		{
			cin >> price_list[i];
		}

		cout << "#" << tc << " " << solve(price_list, price_number) << endl;
	}

	//system("pause")
	return 0;
	
}