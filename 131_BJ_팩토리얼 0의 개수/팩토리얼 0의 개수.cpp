#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int zn = 0;
	zn = n / 5 + n / 25 * 2 + n / 125 * 3;
	cout << zn << endl;
}
