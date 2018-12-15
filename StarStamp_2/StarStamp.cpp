#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "★★★★★★★★ 별찍기3 ★★★★★★★★★★★" << endl;
	while (1)
	{
		int i, j, c, n;
		string star;

		cout << "몇줄을 만들지 입력해 주세요! 0을 입력하면 종료합니다" << endl;
		cin >> n;

		if (n == 0)
			break;

		cout << n << "줄을 만듭니다!" << endl;
		cout << "---------------------------------------------------" << endl;

		c = 1;
		for (i = 1; i <= n; i++)
		{

			for (j = 1; j <= n; j++)
			{

				if (j <= n - c)	// 별이 찍히는 범위를 지정
					star += "□";

				else
					star += "★";

			}
			cout << star << endl;
			star = "";
			c++;
		}
		cout << endl;
		cout << "---------------------------------------------------" << endl;
	}
}
