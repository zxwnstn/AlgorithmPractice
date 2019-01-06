#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	long n, m, cnt_n2 = 0, cnt_n5 = 0, cnt_m2 = 0, cnt_m5 = 0, cnt_nm2 = 0, cnt_nm5 = 0;
	cin >> n >> m;
	long l = n - m;

	if (n == m)
		cout << 0 << endl;
	else if (n == 0 || m == 0)
		cout << 0 << endl;

	else
	{
		for (long i = 2; i <= n; i *= 2)
		{
			cnt_n2 += n / i;
			cnt_m2 += m / i;
			cnt_nm2 += l / i;
		}

		for (long i = 5; i <= n; i *= 5)
		{
			cnt_n5 += n / i;
			cnt_m5 += m / i;
			cnt_nm5 += l / i;
		}

		long two = cnt_n2 - cnt_nm2 - cnt_m2;
		long five = cnt_n5 - cnt_m5 - cnt_nm5;

		cout << (two > five ? five : two) << endl;
	}
}
