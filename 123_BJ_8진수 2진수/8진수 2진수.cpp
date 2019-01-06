#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string convert(const char &s)
{
	int is = s - '0';
	string result;
	if (s == '0')
		return "000";
	else if (s == '1')
		return "001";
	
	while (1)
	{
		result += char(is % 2 + '0');
		is /= 2;
		if (is < 1)
			break;
	}
	if ('1' < s && s <= '3')
		result += "0";

	reverse(result.begin(), result.end());
	return result;
}

string firstconvert(const char &s)
{
	int is = s - '0';
	string result;
	while (1)
	{
		result += char(is % 2 + '0');
		is /= 2;
		if (is < 1)
			break;
	}
	reverse(result.begin(), result.end());
	return result;
}

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	string result;
	for (int i = 0; i < l; i++)
	{
		if (i == 0)
			result += firstconvert(s[i]);
		else
			result += convert(s[i]);
	}
	cout << result << endl;
}