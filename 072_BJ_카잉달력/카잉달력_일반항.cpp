//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		//�Է¹ޱ�
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
//		//NM����, xy����
//		int MNdistance = N - M;
//		int xydistance = x - y;
//
//		cout << "MNdistance=" << MNdistance << " xydistance=" << xydistance << endl;
//		//xy���� ��ȯ �����
//		if (xydistance < 0)
//			xydistance = N + xydistance;
//
//		//N�������� ȸ��Ƚ�� ���ϱ�
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
//		//��º�
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