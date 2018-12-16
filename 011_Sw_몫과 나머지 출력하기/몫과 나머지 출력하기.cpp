#include<iostream>
using namespace std;

int main()
{
	int i, n, a, b;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << "#" << i + 1 << " " << a / b << " " << a % b << endl;
	}
	return 0;
}