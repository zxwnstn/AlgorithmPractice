#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "★★★★★★★★ 별찍기3 ★★★★★★★★★★★" << endl;
	while (1)
	{
		int i, j, c, n, m;		//c 계산인자
								//n 입력받은 행의수
								//m 행의 중심 번호
		string star;
		cout << "몇줄을 만들지 홀수로 입력해 주세요!0을 입력하면 종료합니다" << endl;
		
		//입력 로직 ( 입력은 짝수여야 하고 0일시 종료한다.)
		while (1)
		{
			cin >> n;
			if ( n == 0 )
				break;
			if ( n % 2 == 0 )
				cout << " 홀수로 입력하라고 ㅡㅡ " << endl;
			else
				break;
		}
		if (n == 0)
			break;


		cout << n << "줄을 만듭니다!" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << endl;

		// starmp 로직 - 처음
		c = 0;
		m = (n + 1) / 2;
		for (i = 1; i <= n; i++)
		{
			if (i <= m)
			{
				for (j = 1; j <= n; j++)
				{
					if ( j >= m - c && j <= m + c )
					{
						star += "★";
					}
					else
						star += "□";
				}
				if ( c < m - 1 )
					c += 1;
				else
					c -= 1;
			}
			else
			{
				for (j = 1; j <= n; j++)
				{
					if (j >= m - c && j <= m + c)
					{
						star += "★";
					}
					else
						star += "□";
				}
				c -= 1;
			}
			cout << star << endl;
			star = "";
		}// starmp 로직 - 끝

		cout << "---------------------------------------------------------------------" << endl;
		cout << endl;
	}
}