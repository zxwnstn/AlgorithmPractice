#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string star;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= n - i + 1 )
				star += "*";
		}
		cout << star << endl;
		star = "";
	}
	return 0;
}