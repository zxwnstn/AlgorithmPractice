//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int M, N, target_x, target_y;
//		int x = 1;
//		int y = 1;
//		int count = 0;
//		cin >> M >> N >> target_x >> target_y;
//
//		while (!(x == M && y == N))
//		{
//			count++;
//			{
//				if (x < M)
//					x++;
//				else
//					x = 1;
//			}
//			{
//				if (y < N)
//					y++;
//				else
//					y = 1;
//			}
//
//
//			if (x == target_x && y == target_y)
//			{
//				cout << count+1 << endl;
//				break;
//			}
//
//		}
//
//		if (x == M && y == N)
//			cout << -1 << endl;
//
//	}
//	return 0;
//
//}

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		//입력받기
		int M, N, x, y;
		cin >> M >> N >> x >> y;
		if (M > N)
		{
			int temp;
			temp = M;
			M = N;
			N = temp;
			temp = x;
			x = y;
			y = temp;
		}
		cout << "M=" << M << " N=" << N << " x=" << x << " y=" << y << endl;
		//NM차이, xy차이
		int MNdistance = N - M;
		int xydistance = y - x;

		//xy차이 변환 양수로
		if (xydistance < 0)
			xydistance = N + xydistance;
		cout << "MNdistance=" << MNdistance << " xydistance=" << xydistance << endl;

		//N기준으로 회전횟수 구하기
		int cycletime = 0;
		int tempN = N;
		while (true)
		{
			if (M - N == 0 && x - y != 0)
			{
				cycletime = -1;
				break;
			}
			else if (M - N == 0)
				break;
			else if (tempN < 0)
			{
				tempN = N + tempN;
			}
			else if (tempN == xydistance)
				break;
			else if (tempN == 0)
			{
				cycletime = -1;
				break;
			}
			else
			{
				tempN -= MNdistance;
				cycletime++;
			}
			cout << "tempN=" << tempN << " cycletime=" << cycletime << endl;
		}
		cout << "cycletime=" << cycletime << endl;

		//출력부
		if (x == y)
			cout << x << endl;
		else if (cycletime == -1)
			cout << -1 << endl;
		else
		{
			cout << cycletime * M + x << endl;
		}
	}
	return 0;
}