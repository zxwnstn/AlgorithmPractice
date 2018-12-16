#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n, in, c_n;
	
	//동적배열 만들기
	cin >> n;
	int *my_array = (int*)malloc(sizeof(int)*n);
	int *sort_array = (int*)malloc(sizeof(int)*n);
	//배열 입력 받기
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		my_array[i] = in;
	}
	//입력받은 배열 출력하기
	for (int i = 0; i < n; i++)
	{
		cout << my_array[i] << " ";
	}
	cout << endl;
	//Sort로직 큰수 부터 작은수로

	for (int i = 0; i < n; i++)					// 배열의 길이 n만큼 탐색할 예정
	{
		c_n = 0;
		for (int j = 0; j < n; j++)				// 배열중 가장큰수 탐색
		{
			if (c_n < my_array[j])
				c_n = my_array[j];		
		}

		sort_array[i] = c_n;				// sort_array[i]에 도출된 가장 큰 수 c_n을 할당

		for (int l = 0; l < n; l++)
		{
			if (my_array[l] == c_n)
				my_array[l] = 0;			// my_array중 가장큰수 c_n에 해당하는 원소를 0으로 바꿈
		}
	}
	//sort된 배열 출력하기
	for (int i = 0; i < n; i++)
	{
		cout << sort_array[i] << " ";		
	}
	cout << endl;
	return 0;
}