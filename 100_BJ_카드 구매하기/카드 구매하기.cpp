#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int p[1001];
long long memo[1001];


void print(char *c)
{
	cout << c << endl;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	memo[1] = p[1];
	
	vector<long long> temp;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i / 2; j++)
			temp.push_back(memo[i - j] + memo[j]);
		temp.push_back(p[i]);
		auto temp_int = max_element(temp.begin(), temp.end());
		memo[i] = *temp_int;
		temp.clear();
	}
	cout << memo[n] << endl;
	return 0;


}