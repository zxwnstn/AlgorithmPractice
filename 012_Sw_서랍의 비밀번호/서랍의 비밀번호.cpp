#include <iostream>
using namespace std;

int main()
{
	int a, b, count;
	cin >> a >> b;
	count = 1;
	while (1)
	{
		if (a == b)
			break;
		else
			b += 1;
		count++;
	}
	cout << count << endl;
	return 0;
}