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

		//i가 둘다 나눠질때
		else if (i%2 == 0 && i % 3 == 0)
		{
			if (memorization[i / 2] < memorization[i / 3])
				memorization[i] = memorization[i / 2] + 1;
			else
				memorization[i] = memorization[i / 3] + 1;
		}

		//i가 2로 나눠질때
		else if (i % 2 == 0 && i % 3 != 0)
		{
			if (memorization[i / 2] < memorization[i - 1])
				memorization[i] = memorization[i / 2] + 1;
			else
				memorization[i] = memorization[i - 1] + 1;
		}

		//i가 3으로 나눠질때
		else if (i % 2 != 0 && i % 3 == 0)
		{
			if (memorization[i / 3] < memorization[i - 1])
				memorization[i] = memorization[i / 3] + 1;
			else
				memorization[i] = memorization[i - 1] + 1;

		}

		//i가 둘다 나눠지지 않을때
		else if (i % 2 != 0 && i % 3 != 0)
		{
			memorization[i] = memorization[i - 1] + 1;
		}
	
	}
	/*for (int i = 0; i <= n; i++)
	{
		cout << i << "번메모" << memorization[i] << " ";
	}
*/
	cout << memorization[n] << endl;
	return 0;

}