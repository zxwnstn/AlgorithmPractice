#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	

	int n;
	string s;
	cin >> n;

	if (n == 0)
		cout << 0 << endl;
	else
	{
		while (1)
		{

			if (n == -1)
			{
				s += "11";
				break;
			}
			else if (n == 1)
			{
				s += "1";
				break;
			}
			else if (n < 0 && n % 2 != 0)
			{
				n = n / -2 + 1;
				s += "1";
			}
			else
			{
				if (n % 2 == 0)
					s += "0";
				else
					s += "1";
				n /= -2;
			}
		}
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}