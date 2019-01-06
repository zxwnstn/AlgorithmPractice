#include<iostream>
#include<stdio.h>
#define MAX int(1000001)
using namespace std;

bool p[MAX+1];
int prime[MAX]{ 0 };
int k = 0;

int main()
{
	for (int i = 2; i <= MAX; i++)
	{
		if (p[i] == false)
		{
			prime[k++] = i;
			for (int j = i + i; j <= MAX; j += i)
			{
				if (p[j])
					p[j] = true;
			}
		}
	}
	while(1)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i <= k; i++)
		{
			if (p[n - prime[i]] == false)
			{
				printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
				break;
			}
		}
	}
	return 0;
}

//#include <iostream>
//using namespace std;
//const int MAX = 1000000;
//int prime[MAX];
//int pn;
//bool check[MAX + 1]; // true: 지워진것 (소수가 아님), false: 지워지지 않음 (소수)
//int main() {
//	for (int i = 2; i <= MAX; i++) {
//		if (check[i] == false) {
//			prime[pn++] = i;
//			for (int j = i + i; j <= MAX; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	while (true) {
//		int n;
//		cin >> n;
//		if (n == 0) {
//			break;
//		}
//		for (int i = 1; i < pn; i++) {
//			if (check[n - prime[i]] == false) {
//				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
//				break;
//			}
//		}
//	}
//	return 0;
//}