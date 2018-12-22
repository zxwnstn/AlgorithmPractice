#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input, output;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (i % 10 == 9)
		{
			output += input[i];
			cout << output << endl;
			output = "";
		}
		else if (i == input.size() - 1)
		{
			output += input[i];
			cout << output;
		}
		else
			output += input[i];
	}
	return 0;
}