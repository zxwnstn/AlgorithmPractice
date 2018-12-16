#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{	
	int n, i, scores_n, t_n;
	cin >> n;
	int *scores = (int*)malloc(sizeof(int) * 1000);
	int *sorted = (int*)malloc(sizeof(int) * 101);
	

	for (int j = 0; j < n; j++ )			//몇회돌릴 것인지 결정
	{
		cin >> t_n;
		for (i = 0; i < 1000; i++)		//점수들 입력받기
		{
			cin >> scores_n;
			scores[i] = scores_n;
		}							

		for (i = 0; i <= 100; i++)			//0점부터 100점까지 탐색
		{
			int counter = 0;				
			for (int j = 0; j< 1000; j++)	//저장된 스코어들 탐색
			{
				if ( i == scores[j])
					counter += 1;			//카운터를 이용해 0부터 100까지의 점수 카운트
			}
			sorted[i] = counter;			//카운트 된 수를 sorted배열에 저장
		}

		int c_n = 0;
		for (i = 0; i <= 100; i++)				//최빈도수 도출하기
		{
			if (sorted[i] > c_n)
				c_n = sorted[i];				// c_n은 최빈도수가 된다.
		}

 		int mode;
		for (i = 0; i <= 100; i++)				//최빈점수 도출하기
		{
			if (c_n == sorted[i])
			{
				mode = i;
			}
		}

		cout << "#" << t_n << " " << mode << endl;		// 최빈점수 출력

	}

	return 0;
}