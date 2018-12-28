#include<iostream>
using namespace std;

int main()
{
	int numlist;
	int sum = 0;
	int aver;

	for (int i = 0; i < 5; i++)
	{
		cin >> numlist;
		if (numlist < 40)
			numlist = 40;
		sum += numlist;
	}
	aver = sum / 5;

	cout << aver;

}