#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

string gamestring(int a)
{
	string temp = to_string(a);
	string clap = "";
	for (int j = 0; j < temp.length(); j++)
	{
		if (temp[j] == '3' || temp[j] == '6' || temp[j] == '9')
		{
			clap += '-';
		}
	}
	if (clap != "")
	{
		return clap;
	}
	else
		return temp;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{

		cout << gamestring(i) << " ";
	}
	system("pause");
	return 0;
}