#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<vector<int>> my_arr{ {1,2,3}, {4,5,6,}, {7,8,9} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			/*if (i == j)
			{
				my_arr[i][j] += 1;
			}*/
			cout << my_arr[i][j] << '\t';
		}
		cout << endl;
	}

	cout << "2���� �迭 �Է¹ޱ�" << endl;
	vector<vector<int>> my_arr2(10, vector<int>(10, 0));
	cout << "��� ���� �Է��� �ּ���" << endl;
	int row, col, temp;
	cin >> row >> col;
	cout << row << "��" << col << "��" << endl;
	for (int k = 0; k < row; k++)
	{
		for (int l = 0; l < col; l++)
		{
			cin >> my_arr2[k][l];
		}
	}

	cout << "�Է¹��� �迭 ����ϱ�" << endl;
	for (int m = 0; m < row; m++)
	{
		for (int n = 0; n < col; n++)
		{
			cout << my_arr2[m][n] << '\t';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}