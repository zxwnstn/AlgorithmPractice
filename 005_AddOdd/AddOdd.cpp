#include<iostream>
using namespace std;

int main()
{
	int i, j, n, sum, in;	
	cin >> n;

	for (i = 0; i < n; i++)							//��� ���Ұ����� ���� �ݺ�
	{
		sum = 0;
		for (j = 0; j < 10; j++)					//10���� ���ڸ� �޴´�.
		{
			cin >> in;								//in�� �Է� ����.
			if (in % 2 == 1)						//���� Ȧ�����
				sum += in;							//sum�� ���Ѵ�.
		
		cout << "#" << (i+1) << " " << sum << endl;	
	}
	return 0;
}