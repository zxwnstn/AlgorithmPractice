#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "�ڡڡڡڡڡڡڡ� �����3 �ڡڡڡڡڡڡڡڡڡڡ�" << endl;
	while (1)
	{
		int i, j, c, n, m;		//c �������
								//n �Է¹��� ���Ǽ�
								//m ���� �߽� ��ȣ
		string star;
		cout << "������ ������ Ȧ���� �Է��� �ּ���!0�� �Է��ϸ� �����մϴ�" << endl;
		
		//�Է� ���� ( �Է��� ¦������ �ϰ� 0�Ͻ� �����Ѵ�.)
		while (1)
		{
			cin >> n;
			if ( n == 0 )
				break;
			if ( n % 2 == 0 )
				cout << " Ȧ���� �Է��϶�� �Ѥ� " << endl;
			else
				break;
		}
		if (n == 0)
			break;


		cout << n << "���� ����ϴ�!" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << endl;

		// starmp ���� - ó��
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
						star += "��";
					}
					else
						star += "��";
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
						star += "��";
					}
					else
						star += "��";
				}
				c -= 1;
			}
			cout << star << endl;
			star = "";
		}// starmp ���� - ��

		cout << "---------------------------------------------------------------------" << endl;
		cout << endl;
	}
}