#include<iostream>
using namespace std;
int rgb_house[1001][3];
int memo[1001][3];

int main()
{
	//���� �ޱ�
	int n;
	cin >> n;

	//rgb���� �ޱ�
	int in;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> rgb_house[i][j];
	}

	//rgb ���� ����
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			memo[i][0] = ;
		}

	}

}