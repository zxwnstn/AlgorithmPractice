#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "�ڡڡڡڡڡڡڡ� �����3 �ڡڡڡڡڡڡڡڡڡڡ�" << endl;
	while(1)
	{
		int i, j, c, n;
		string star;

		cout << "������ ������ �Է��� �ּ���! 0�� �Է��ϸ� �����մϴ�" << endl;
		cin >> n;
		
		if (n == 0)
			break;

		cout << n << "���� ����ϴ�!" << endl;
		cout << "---------------------------------------------------" << endl;

		c = 0;
		for (i = 1; i <= n; i++)
		{	
			
			for (j = 1; j <= (2 * n - 1) ; j++)
			{
				
				if ( j >= n - c  && j <= n + c ) // ���� ������ ������ ����
					star += "��";

				else
					star += "��";
				
			}
			cout << star << endl;
			star = "";
			c++;
		}
		cout << endl;
		cout << "---------------------------------------------------" << endl;
	}
}