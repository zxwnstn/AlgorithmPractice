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

		cout << "당신이 입력한 제곱수는 " << n * n << "입니다." << endl;
	}

	return 0;
}

