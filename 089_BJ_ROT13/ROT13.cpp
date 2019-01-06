#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for (char &x : s)
	{
		if (x >= 65 && x <= 77)
			x += 13;
		else if (x >= 78 && x <= 90)
			x -= 13;
		else if (x >= 97 && x <= 109)
			x += 13;
		else if (x >= 110 && x <= 122)
			x -= 13;
	}
	cout << s;
	return 0;
}