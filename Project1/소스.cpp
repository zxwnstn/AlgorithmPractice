#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int i;
	int c = 1;
	
	cout << "������ ������� �Է����ּ���" << endl;
	cin >> n;

	
	do{
		string star;

		for (i = 1; i <= n; i++)
		{
			if ( n - c >= i)
				star = star + "��";

			else
				star = star + "��";

		}

		cout << star << endl;
		c = c + 1;
	} while ( c < n + 1);

	return 0;
}