#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int *arr_1 = (int*)malloc(sizeof(int) * 3);
	int *arr_2 = (int*)malloc(sizeof(int) * 3);
	int *arr_3 = (int*)malloc(sizeof(int) * 3);
	int i, j, k, in;
	//각각 배열받기
	// arr_1
	for (i = 0; i < 3; i++)
	{
		cin >> in;
		arr_1[i] = in;
	}

	// arr_2
	for (j = 0; j < 3; j++)
	{
		cin >> in;
		arr_2[j] = in;
	}

	// arr_3
	for (k = 0; k < 3; k++)
	{
		cin >> in;
		arr_3[k] = in;
	}

	

	int *sum_arr = (int*)malloc(sizeof(int) * 6);
	int o, m, l;
	int a, b, c, sum, n;
	n = 0;

	//로직
	for (o = 0;  o< 3; o++)
	{
		a = arr_1[o];

		for (m = 0; m < 3; m++)
		{
			if (o == m) { continue; }
			
			b = arr_2[m];

			for (l = 0; l < 3; l++)
			{
				if (o == l || m == l){continue;}

				c = arr_3[l];

				sum = a + b + c;
				//cout << sum << endl;
				sum_arr[n] = sum;
				n += 1;
			}
		}
	}

	// sum_arr 최고값찾기
	int c_n =0;
	for (int p = 0; p < 6; p++)
	{
		if (sum_arr[p] > c_n)
			c_n = sum_arr[p];
	}

	// 출력
	cout << c_n << endl;

	system("pause");
	return 0;
}
