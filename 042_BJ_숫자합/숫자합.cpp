#include<iostream>
using namespace std;

int main()
{
	int n, sum;
	char sumn[10000];
	cin >> n;
	cin >> sumn;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += sumn[i]-48;
	}
	cout << sum << endl;
	return 0;
}