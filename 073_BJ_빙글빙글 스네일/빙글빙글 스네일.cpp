#include<iostream>
using namespace std;

int main()								
{										
	int time;							
	cin >> time;						
	int i = 0;							
	int movement = 1;					
	//�����̵� Ƚ�� ���ϱ�				
	while (i <= time)					
	{									
		i = movement * (movement + 1);	
		movement++;
	}
	movement -= 2;

	int remainder = time - (movement) * (movement + 1);
	cout << time << "�� " << movement << ":�̵�Ƚ��" << " ��������:" << remainder << endl;
	int x, y;

	int identifi_move = (movement + 1) / 2;
	x = identifi_move;
	y = identifi_move;

	if (movement % 2 == 0)
	{
		x = -identifi_move;
		y = -identifi_move;
	}
	cout << x << ", " << y << " �������� " << remainder << endl;

	int addmovedefalt = 2 * (movement + 1);

	cout << addmovedefalt << "�߰� �̵� �Ѱ�ġ" << endl;

	if (remainder != 0)
	{
		if (x == 0)
			cout << x << " " << y + remainder << endl;
		else if (x < 0)
		{
			if (addmovedefalt / 2 > remainder)
				y += remainder;
			else
			{
				y += addmovedefalt / 2;
				x += remainder - addmovedefalt / 2;
			}
			cout << x << " " << y << endl;
		}
		else if (x > 0)
		{
			if (addmovedefalt / 2 > remainder)
				y -= remainder;
			else
			{
				y -= addmovedefalt / 2;
				x -= remainder - addmovedefalt / 2;
			}
			cout << x << " " << y << endl;
		}
	}
	else
	{
		cout << x << " " << y << endl;
	}
	return 0;

}

