#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n, in;
	cin >> n;
	int *my_arr = (int*)malloc(sizeof(int) * n);

	//배열받기
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		my_arr[i] = in;
	}
	
	int count = 0;
	//로직
	for (int j = 0; j < n - 1; j++)
	{

		if (my_arr[j] == 1)
		{
			if ( my_arr[j + 1] == 0 && my_arr[j+2] == 1 )
			{
				my_arr[j + 2] = 0;
				count++;
			}
		}
	}
	free(my_arr);
	cout << count << endl;
	system("pause");
	return 0;
}