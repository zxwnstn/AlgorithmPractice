#include<iostream>
using namespace std;

int Convert_Dial(char str_c)
{
	if (str_c < 68)
	{
		return 3;
	}
	else if (str_c >= 68 && str_c < 71)
	{
		return 4;
	}
	else if (str_c >= 71 && str_c < 74)
	{
		return 5;
	}
	else if (str_c >= 74 && str_c < 77)
	{
		return 6;
	}
	else if (str_c >= 77 && str_c < 80)
	{
		return 7;
	}
	else if (str_c >= 80 && str_c < 84)
	{
		return 8;
	}
	else if (str_c >= 84 && str_c < 87)
	{
		return 9;
	}
	else if (str_c >= 87)
	{
		return 10;
	}
}

int main()
{
	char dial[15]{0, };
	cin >> dial;
	int count = 0;
	for (int i = 0; i < 15; i++)
	{
		if (dial[i] == NULL)
			break;
		count += Convert_Dial(dial[i]);
	}
	cout << count << endl;
	return 0;
}