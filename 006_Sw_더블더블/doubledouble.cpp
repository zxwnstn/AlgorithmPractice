#include<iostream>
using namespace std;

int main()
{
	int i, j, l, n, bn;
	cin >> n;

	for (i = 0; i <= n; i++)				// 0�� ���� �ǹǷ� n+1ȸ ����
	{
		bn = 1;								// bn�� basic number = 1 �� �Ѵ�.
		if (i == 0)							// 2^0�� ���
			cout << 1 << " ";
		else if (i == n)					// 2^n�� ���
		{
			for (j = 0; j < n; j++)			// 2�� n�� �����ش�.(���⼭ 0 �������� ����)
				bn *= 2;
			cout << bn;
		}
		else                                // �������� ��� ������ 0�� n�� �ƴҶ�
		{
			for (l = 0; l < i; l++)			// 2^i
				bn *= 2;
			cout << bn << " ";
		}
	}
	return 0;
}
