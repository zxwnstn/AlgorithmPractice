#include<iostream>
using namespace std;

int main()
{
	int x, y, n, count;		// x는 지민, y는 한수
	cin >> n >> x >> y;
	count = 1;

	while (1)
	{	
		//다음라운드에 진출할시 지민이가 받는 번호
		{
			if (x / 2 == 0)
			{
				x = 1;
			}
			else if (x % 2 == 0)
			{
				x = x / 2;
			}
			else if (x % 2 == 1)
			{
				x = x / 2 + 1;
			}
		
		}

		//다음라운드에 진출시 한수가 받는 번호
		{
			if (y / 2 == 0)
			{
				y = 1;
			}
			else if (y % 2 == 0)
			{
				y = y / 2;
			}
			else if (y % 2 == 1)
			{
				y = y / 2 + 1;
			}

		}

		//다음 라운드시 한수와 지민이의 번호가 같다는 소리는 즉 대결하게 된다. 이번 라운드에서 대결한다는 소리다.
		if (x == y)
			break;

		count++;	// 라운드 체크 변수
	}
	cout << count << endl;

	system("pause");
	return 0;
}