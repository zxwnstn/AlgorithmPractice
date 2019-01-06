#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string Bconvert(long a, const int &B)
{
	string s = "";
	while (1)
	{
		s += char(a % B) + '0' ;
		a /= B;
		if (a == 0) break;
	}
	return s;
}


int main()
{
	int A, B;
	cin >> A >> B;
	int n;
	cin >> n;
	long sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum = sum * A + x;
	}
	string result = Bconvert(sum, B);

	int l = result.length();
	for (int i = l - 1; i >= 0; i--)
		cout << int(result[i])-48 << " ";

	return 0;
}
