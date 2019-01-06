#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n)
{
	if (n < 2)
		return false;
	else
		for (int i = 2; i*i <= n; i++)
			if (n%i == 0)
				return false;
	return true;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int cnt = 0;
	for (auto &e : a)
	{
		if (isPrime(e))
			cnt += 1;
	}
	cout << cnt << endl;
	return 0;
}