#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	a = a + b;
	c = c + d;
	cout << a << endl;
	cout << atoll(a.c_str()) << endl;

	return 0;
}