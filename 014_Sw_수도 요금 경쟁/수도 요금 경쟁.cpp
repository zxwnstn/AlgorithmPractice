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

		//A���� �����
		int a_price, bq_price, bs_price;
		a_price = P * W;

		//B���� �����
		//��뷮�� R���� �۴ٸ�
		if (W <= R)
		{
			bq_price = Q;
			bs_price = 0;
		}
		// ��뷮�� R���� ũ�ٸ�
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





