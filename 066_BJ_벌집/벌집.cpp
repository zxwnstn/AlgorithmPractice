#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n; 
	int i = 1;
	while (1)
	{
		if ((3 * i*(i - 1) + 1) >= n)
			break;
		i++;
	}
	cout << i << endl;
}