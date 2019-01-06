#include<iostream>
using namespace std;

////top down
//int Fillin(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return Fillin(n - 1) + Fillin(n - 2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << Fillin(n);
//	return 0;
//}

//botom up

int main()
{
	int n;
	cin >> n;
	int arr[1001];
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2])%10007;
	cout << arr[n] << endl;
	return 0;
}