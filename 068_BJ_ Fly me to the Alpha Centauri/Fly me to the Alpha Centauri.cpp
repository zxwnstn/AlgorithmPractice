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
		cout << "중간값은 " << (i * i + (i - 1)*(i - 1)) / 2 << endl;*/

		if (n == 1)
			cout << 1;
		else if (n == 2)
			cout << 2;
		else if (n == 3)
			cout << 3;
		else if (n == i * i)
		{
			cout << movements_max;
			//cout << "제곱값이네요" << endl;
		}
		else if (n <= (i * i + (i - 1)*(i - 1)) / 2)
		{
			cout << movements_max - 1;
			//cout << "중간보다 작네요 " << endl;
		}
		else if (n > (i * i + (i - 1)*(i - 1)) / 2)
		{
			cout << movements_max;
			//cout << "중간보다 크네요 " << endl;
		}
		cout << endl;
	}
	
	return 0;

}