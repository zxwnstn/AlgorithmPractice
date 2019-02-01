#include<iostream>
using namespace std;

int main()
{
	int n, zn = 0;
	cin >> n;
	zn = n / 5 + n / 25 * 2 + n / 125 * 3;
	cout << zn;
	return 0;
}
