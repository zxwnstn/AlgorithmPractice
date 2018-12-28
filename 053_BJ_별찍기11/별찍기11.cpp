#include<iostream>
#include<string>
using namespace std;
string starfield[10000];

string fillstarfield(int n)
{
	if (n == 3)
	{
		starfield[1] = "  *   ";
		starfield[2] = " * *  ";
		starfield[3] = "***** ";
		return starfield;
	}
	for (int i = n / 2 + 1; i < n; i++)
	{
		starfield[i] = fillstarfield(n / 2)[i - n / 2] + fillstarfield(n / 2)[i - n / 2];
		return starfield;
	}
}
	
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cout << starfield[i] << endl;
	}
	return 0;
}