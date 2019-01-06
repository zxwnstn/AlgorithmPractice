#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Convert(string s)
{
	int sum = 0;
	int l = s.length();
	for (int i = 0; i < l; i++)
	{
		int b = 1;
		for (int j = 1; j <= i; j++)
			b *= 2;
		sum += b * (s[i] - '0');
	}
	string result = to_string(sum);
	return result;	
}

int main()
{
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	int l = s.length();
	string result;
	string temp;
	for (int i = 0; i < l; i++)
	{
		temp += s[i];
		cout << temp << endl;
		if (i % 3 == 2)
		{
			result += Convert(temp);
			temp = "";
		}
		else if (i == l-1)
		{
			result += Convert(temp);
		}
	}
	reverse(result.begin(), result.end());

	cout << result << endl;
}