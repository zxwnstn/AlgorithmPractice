#include<iostream>
#include<stdio.h>
using namespace std;
int input_arr[2];
int mani_arr[2];
int temp_arr[2];

int main()
{
	int input_num;
	cin >> input_num;
	input_arr[1] = input_num % 10;
	temp_arr[1] = input_num % 10;
	mani_arr[1] = input_num % 10;
	input_arr[0] = input_num / 10;
	temp_arr[0] = input_num / 10;
	mani_arr[0] = input_num / 10;
	int count = 0;

	while (1)
	{
		mani_arr[0] = temp_arr[1];
		mani_arr[1] = (temp_arr[0] + temp_arr[1]) % 10;
		temp_arr[0] = mani_arr[0];
		temp_arr[1] = mani_arr[1];
		if (input_arr[0] == mani_arr[0] && input_arr[1] == mani_arr[1])
			break;
		count++;
	}
	cout << count + 1 << endl;
	return 0;
}
