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
		//cout << "포문시작" << count << endl;
		//돌던진 거리 정보 받고 배열 저장하기
		cin >> peop_n;
		int *distance = (int*)malloc(sizeof(int) * peop_n);
		for (int i = 0; i < peop_n; i++)
		{
			cin >> in;
			distance[i] = in;
		}

		// 가장 작은 절대값 찾기
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
			//cout << "카운팅 "<< count << endl;
		}

		//출력부
		cout << "#" << i + 1 << " " << smallest_number << " " << count << endl;
		free(distance);
		//count = 0;
		cout << count << endl;
	}

	//system("pause");
	return 0; 

}