#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, a, b, i = 1;
		cin >> a >> b;
		n = b - a;
		//cout << n << endl;

		while (1)
		{
			if (i*i >= n)
				break;
			i++;
		}
		//cout << "i " << i << endl;

		int movements_max = 2 * i - 1;
		/*cout << "maxmove " << movements_max << endl;
		cout << "�߰����� " << (i * i + (i - 1)*(i - 1)) / 2 << endl;*/

		if (n == 1)
			cout << 1;
		else if (n == 2)
			cout << 2;
		else if (n == 3)
			cout << 3;
		else if (n == i * i)
		{
			cout << movements_max;
			//cout << "�������̳׿�" << endl;
		}
		else if (n <= (i * i + (i - 1)*(i - 1)) / 2)
		{
			cout << movements_max - 1;
			//cout << "�߰����� �۳׿� " << endl;
		}
		else if (n > (i * i + (i - 1)*(i - 1)) / 2)
		{
			cout << movements_max;
			//cout << "�߰����� ũ�׿� " << endl;
		}
		cout << endl;
	}
	
	return 0;

}