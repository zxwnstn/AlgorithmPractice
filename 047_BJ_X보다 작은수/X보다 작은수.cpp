#include<iostream>
using namespace std;
int numlist[10001];

int main()
{
	int listlen, pvalue;
	cin >> listlen >> pvalue;

	for (int i = 0; i < listlen; i++)
	{
		cin >> numlist[i];
	}
	for (int i = 0; i < listlen; i++)
	{
		if (numlist[i] < pvalue)
			cout << numlist[i] << " ";
	}

	return 0;
}