#include<iostream>
using namespace std;
int memorization[1000000]{ 0, };

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
			memorization[i] = 0;
		else if (i == 1)
			memorization[i] = 0;
		else if (i == 2)
			memorization[i] = 1;
		else if (i == 3)
			memorization[i] = 1;

		//i�� �Ѵ� ��������
		else if (i%2 == 0 && i % 3 == 0)
		{
			if (memorization[i / 2] < memorization[i / 3])
				memorization[i] = memorization[i / 2] + 1;
			else
				memorization[i] = memorization[i / 3] + 1;
		}

		//i�� 2�� ��������
		else if (i % 2 == 0 && i % 3 != 0)
		{
			if (memorization[i / 2] < memorization[i - 1])
				memorization[i] = memorization[i / 2] + 1;
			else
				memorization[i] = memorization[i - 1] + 1;
		}

		//i�� 3���� ��������
		else if (i % 2 != 0 && i % 3 == 0)
		{
			if (memorization[i / 3] < memorization[i - 1])
				memorization[i] = memorization[i / 3] + 1;
			else
				memorization[i] = memorization[i - 1] + 1;

		}

		//i�� �Ѵ� �������� ������
		else if (i % 2 != 0 && i % 3 != 0)
		{
			memorization[i] = memorization[i - 1] + 1;
		}
	
	}
	/*for (int i = 0; i <= n; i++)
	{
		cout << i << "���޸�" << memorization[i] << " ";
	}
*/
	cout << memorization[n] << endl;
	return 0;

}