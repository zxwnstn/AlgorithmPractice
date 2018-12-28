//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		//입력받기
//		int M, N, x, y;
//		cin >> M >> N >> x >> y;
//		if (M > N)
//		{
//			int temp;
//			temp = M;
//			M = N;
//			N = temp;
//			temp = x;
//			x = y;
//			y = temp;
//		}
//		cout << "M=" << M << " N=" << N << " x=" << x << " y" << y << endl;
//		//NM차이, xy차이
//		int MNdistance = N - M;
//		int xydistance = x - y;
//
//		cout << "MNdistance=" << MNdistance << " xydistance=" << xydistance << endl;
//		//xy차이 변환 양수로
//		if (xydistance < 0)
//			xydistance = N + xydistance;
//
//		//N기준으로 회전횟수 구하기
//		int cycletime = 0;
//		int tempN = N;
//		while (true)
//		{
//			if (tempN == xydistance)
//				break;
//			else if (tempN < 0)
//			{
//				cycletime = -1;
//				break;
//			}
//			tempN -= MNdistance;
//			cycletime++;
//		}
//		cout << "cycletime=" << cycletime << endl;
//
//		//출력부
//		if (cycletime = -1)
//			cout << -1 << endl;
//		else
//		{
//			cout << cycletime * M + N << endl;
//		}
//	}
//	return 0;
//
//}