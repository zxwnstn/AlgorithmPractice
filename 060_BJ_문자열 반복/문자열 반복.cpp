#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string input;
string output;

int main()
{
	int t, copynum;

	cin >> t;

	while (t--)
	{
		cin >> copynum >> input;
		for (int i = 0; i < input.length(); i++)
		{
			for (int j = 0; j < copynum; j++)
				output += input[i];
		}
		cout << output << endl;
		output = "";
	}
	return 0;
}