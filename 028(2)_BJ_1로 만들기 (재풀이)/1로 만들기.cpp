#include<iostream>
using namespace std;
int memo[1000001];

////bottom-up
//int main()
//{
//	int n;
//	cin >> n;
//	memo[1] = 0;
//	memo[2] = 1;
//	memo[3] = 1;
//
//	for (int i = 4; i <= n; i++)
//	{	
//		int minus = 1000001, div2 =1000001, div3 = 1000001;
//
//		minus = memo[i - 1];
//		if (i % 3 == 0)
//			div3 = memo[i / 3];
//		if (i % 2 == 0)
//			div2 = memo[i / 2];
//
//		if (minus <= div2 && minus <= div3)
//		{
//			memo[i] = memo[i - 1] + 1;
//		}
//			
//		else if (div2 <= minus && div2 <= div3)
//		{
//			memo[i] = memo[i / 2] + 1;
//		}
//			
//		else
//		{
//			memo[i] = memo[i / 3] + 1;
//		}
//	}
//	cout << memo[n] << endl;
//	return 0;
//}

//top down

int Dynamic(int n)
{
	if (n == 1)
		return 0;
	int result1 = 1000000, result2 = 1000000, result3 = 1000000;
	result1 = Dynamic(n - 1) + 1;
	if (n % 3 == 0)
		result2 = Dynamic(n / 3) + 1;
	if (n % 2 == 0)
		result3 = Dynamic(n / 2) + 1;

	int result;
	if (result1 <= result2 && result1 <= result3)
		result = result1;
	else if (result2 <= result1 && result2 <= result3)
		result = result2;
	else
		result = result3;

	return result;
}



int main()
{
	int n;
	cin >> n;
	cout << Dynamic(n) << endl;
	return 0;
}

