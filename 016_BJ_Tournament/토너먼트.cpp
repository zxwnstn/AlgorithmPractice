#include<iostream>
using namespace std;

int main()
{
	int x, y, n, count;		// x�� ����, y�� �Ѽ�
	cin >> n >> x >> y;
	count = 1;

	while (1)
	{	
		//�������忡 �����ҽ� �����̰� �޴� ��ȣ
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

		//�������忡 ����� �Ѽ��� �޴� ��ȣ
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

		//���� ����� �Ѽ��� �������� ��ȣ�� ���ٴ� �Ҹ��� �� ����ϰ� �ȴ�. �̹� ���忡�� ����Ѵٴ� �Ҹ���.
		if (x == y)
			break;

		count++;	// ���� üũ ����
	}
	cout << count << endl;

	system("pause");
	return 0;
}