#include<iostream>
using namespace std;

int main()
{
	long long n = 1;

	while (1)
	{
		cin >> n;
		
		if (n == 0)
			break;

		cout << "����� �Է��� �������� " << n * n << "�Դϴ�." << endl;
	}

	return 0;
}

