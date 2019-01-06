#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char convert(int n)
{
	string t = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return t[n];
}

int main()
{
	int N, B;
	cin >> N >> B;
	string s;

	while (1)
	{
		s += convert(N%B);
		N /= B;
		if (N < 1)
			break;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
}