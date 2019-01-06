#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<string> v;
	int len1 = s.length();
	for (int i = 0; i < len1; i++)
	{
		v.push_back({ s });
		string temp;
		int len2 = s.length();
		for (int i = 1; i < len2; i++)
			temp += s[i];
		s = temp;
		temp = "";		
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	return 0;
}