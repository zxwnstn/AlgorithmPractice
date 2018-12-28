#include<iostream>
using namespace std;

int main()								
{										
	int time;							
	cin >> time;						
	int i = 0;							
	int movement = 1;					
	//직선이동 횟수 구하기				
	while (i <= time)					
	{									
		i = movement * (movement + 1);	
		movement++;
	}
	movement -= 2;

	int remainder = time - (movement) * (movement + 1);
	cout << time << "초 " << movement << ":이동횟수" << " 나머지초:" << remainder << endl;
	int x, y;

	int identifi_move = (movement + 1) / 2;
	x = identifi_move;
	y = identifi_move;

	if (movement % 2 == 0)
	{
		x = -identifi_move;
		y = -identifi_move;
	}
	cout << x << ", " << y << " 나머지는 " << remainder << endl;

	int addmovedefalt = 2 * (movement + 1);

	cout << addmovedefalt << "추가 이동 한계치" << endl;

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

