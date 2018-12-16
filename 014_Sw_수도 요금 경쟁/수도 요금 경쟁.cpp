#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >> W;

		//A사의 사용요금
		int a_price, bq_price, bs_price;
		a_price = P * W;

		//B사의 사용요금
		//사용량이 R보다 작다면
		if (W <= R)
		{
			bq_price = Q;
			bs_price = 0;
		}
		// 사용량이 R보다 크다면
		else if (W > R)
		{
			bs_price = Q + S * (W - R);
			bq_price = 0;
		}

		int optimize = 0;
		if (bq_price == 0)
		{
			if (bs_price > a_price)
				optimize = a_price;
			else
				optimize = bs_price;
		}
		else if (bs_price == 0)
		{
			if (bq_price > a_price)
				optimize = a_price;
			else
				optimize = bq_price;
		}
		cout << "#" << i + 1 << " " << optimize << endl;
	}
	//system("pause");
	return 0;
}





