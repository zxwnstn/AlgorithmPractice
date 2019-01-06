#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int Deconvert(char n)
{
	string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l = s.length();
	for (int i = 0; i < l; i++)
	{
		if (s[i] == n)
			return i;
	}
}

int main()
{
	long sum = 0;
	int B;
	string N;
	cin >> N;
	cin >> B;

	reverse(N.begin(), N.end());
	cout << N << endl;
	int b;
	for (int i = 0; i < N.length(); i++)
	{
		b = 1;

		for (int j = 1; j <= i; j++)
			b *= B;

		sum += b * Deconvert(N[i]);
		cout << sum << endl;
	}
	cout << sum << endl;
}