#include<iostream>
#include<stdlib.h>
using namespace std;


int main() 
{
	int n, peop_n, in, smallest_number, count;
	
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		smallest_number = 100001;
		count = 0;
		//cout << "��������" << count << endl;
		//������ �Ÿ� ���� �ް� �迭 �����ϱ�
		cin >> peop_n;
		int *distance = (int*)malloc(sizeof(int) * peop_n);
		for (int i = 0; i < peop_n; i++)
		{
			cin >> in;
			distance[i] = in;
		}

		// ���� ���� ���밪 ã��
		for (int j = 0; j < peop_n; j++)
		{
			if (distance[j] < 0)
			{
				distance[j] = -distance[j];
			}
			if (distance[j] < smallest_number)
			{
				smallest_number = distance[j];
			}
		}

		/*for (int j = 0; j < peop_n; j++)
		{
			cout << distance[j] << endl;
		}*/

		for (int k = 0; k < peop_n; k++)
		{
			if (distance[k] == smallest_number)
			{
				count += 1;
			}
			//cout << "ī���� "<< count << endl;
		}

		//��º�
		cout << "#" << i + 1 << " " << smallest_number << " " << count << endl;
		free(distance);
		//count = 0;
		cout << count << endl;
	}

	//system("pause");
	return 0; 

}