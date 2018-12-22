#include<iostream>
using namespace std;
long long tilecase_n[1001];

int main()
{
	long long output;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			tilecase_n[i] = 1;
		else if (i == 2)
			tilecase_n[i] = 2;
		else
			tilecase_n[i] = (tilecase_n[i - 1] + tilecase_n[i - 2])%10007;
	}
	output = tilecase_n[n] % 10007;
	cout << output;
	return 0;
}


//수열로 풀기
//cin >> n;
//int sum = 0;
//int temp_n = (n + 1) / 2;
//int x = 0;
////cout << temp_n << endl;
//for (int i = 1; i <= temp_n; i++)
//{
//	if (i == 1)
//	{
//		sum = n - 1;
//	}
//	else
//		sum += ((n-1) - x) * ((n-1) - (x - 1)) / 2;
//	//cout << i << " " << sum << endl;
//	x += 2;