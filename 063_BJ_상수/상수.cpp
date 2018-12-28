#include<iostream>
#include<cstring>
using namespace std;

void BigNumber(int a, int b)
{
	if (a > b)
		cout << a;
	else
		cout << b;
}

int StrtoInt(char str[])
{
	char revchar[3];
	int toint;
	for (int i = 2; i >= 0; i--)
	{
		revchar[i] = str[2 - i];
	}
	toint = 100 * int(revchar[0] - 48) + 10 * int(revchar[1]-48) + int(revchar[2]-48);
	return toint;
}

int main()
{
	char a[3], b[3];
	cin >> a >> b;
	BigNumber(StrtoInt(a), StrtoInt(b));
	return 0;

}