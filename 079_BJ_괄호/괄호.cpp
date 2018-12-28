#include<iostream>
#include<string>
using namespace std;

string Isperfect(string str)
{
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			cnt += 1;
		}
		else
			cnt -= 1;
		if (cnt < 0)
			return "NO";
	}
	if (cnt == 0)
		return "YES";
	else
		return "NO";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string input;
		cin >> input;
		cout << Isperfect(input) << endl;
	}
	return 0;
}