#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{	
	int n, i, scores_n, t_n;
	cin >> n;
	int *scores = (int*)malloc(sizeof(int) * 1000);
	int *sorted = (int*)malloc(sizeof(int) * 101);
	

	for (int j = 0; j < n; j++ )			//��ȸ���� ������ ����
	{
		cin >> t_n;
		for (i = 0; i < 1000; i++)		//������ �Է¹ޱ�
		{
			cin >> scores_n;
			scores[i] = scores_n;
		}							

		for (i = 0; i <= 100; i++)			//0������ 100������ Ž��
		{
			int counter = 0;				
			for (int j = 0; j< 1000; j++)	//����� ���ھ�� Ž��
			{
				if ( i == scores[j])
					counter += 1;			//ī���͸� �̿��� 0���� 100������ ���� ī��Ʈ
			}
			sorted[i] = counter;			//ī��Ʈ �� ���� sorted�迭�� ����
		}

		int c_n = 0;
		for (i = 0; i <= 100; i++)				//�ֺ󵵼� �����ϱ�
		{
			if (sorted[i] > c_n)
				c_n = sorted[i];				// c_n�� �ֺ󵵼��� �ȴ�.
		}

 		int mode;
		for (i = 0; i <= 100; i++)				//�ֺ����� �����ϱ�
		{
			if (c_n == sorted[i])
			{
				mode = i;
			}
		}

		cout << "#" << t_n << " " << mode << endl;		// �ֺ����� ���

	}

	return 0;
}