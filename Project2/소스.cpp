#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n, in, c_n;
	
	//�����迭 �����
	cin >> n;
	int *my_array = (int*)malloc(sizeof(int)*n);
	int *sort_array = (int*)malloc(sizeof(int)*n);
	//�迭 �Է� �ޱ�
	for (int i = 0; i < n; i++)
	{
		cin >> in;
		my_array[i] = in;
	}
	//�Է¹��� �迭 ����ϱ�
	for (int i = 0; i < n; i++)
	{
		cout << my_array[i] << " ";
	}
	cout << endl;
	//Sort���� ū�� ���� ��������

	for (int i = 0; i < n; i++)					// �迭�� ���� n��ŭ Ž���� ����
	{
		c_n = 0;
		for (int j = 0; j < n; j++)				// �迭�� ����ū�� Ž��
		{
			if (c_n < my_array[j])
				c_n = my_array[j];		
		}

		sort_array[i] = c_n;				// sort_array[i]�� ����� ���� ū �� c_n�� �Ҵ�

		for (int l = 0; l < n; l++)
		{
			if (my_array[l] == c_n)
				my_array[l] = 0;			// my_array�� ����ū�� c_n�� �ش��ϴ� ���Ҹ� 0���� �ٲ�
		}
	}
	//sort�� �迭 ����ϱ�
	for (int i = 0; i < n; i++)
	{
		cout << sort_array[i] << " ";		
	}
	cout << endl;
	return 0;
}