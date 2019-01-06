#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v;
	vector<int> rv(n);
	vector<int> dps(n);
	vector<int> dpr(n);
	vector<int> tdp(n);

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		rv.push_back(x);
		v.push_back(x);
	}
	
	reverse(rv.begin(), rv.end());

	for (int i = 0; i < n; i++)
	{
		dps[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (v[i] > v[j] && dps[i] < dps[j] + 1)
				dps[i] = dps[j] + 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		dpr[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (rv[i] > rv[j] && dpr[i] < dpr[j] + 1)
				dpr[i] = dpr[j] + 1;
		}
	}

	reverse(dpr.begin(), dpr.end());

	for (int i = 0; i < n; i++)
	{
		tdp[i] = dps[i] + dpr[i];	
	}

	cout << *max_element(tdp.begin(), tdp.end())-1 << endl;
	return 0;
}