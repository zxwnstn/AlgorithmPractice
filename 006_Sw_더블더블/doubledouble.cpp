#include<iostream>
using namespace std;

int main()
{
	int i, j, l, n, bn;
	cin >> n;

	for (i = 0; i <= n; i++)				// 0이 포함 되므로 n+1회 돌림
	{
		bn = 1;								// bn은 basic number = 1 로 한다.
		if (i == 0)							// 2^0의 경우
			cout << 1 << " ";
		else if (i == n)					// 2^n의 경우
		{
			for (j = 0; j < n; j++)			// 2를 n번 곱해준다.(여기서 0 생각하지 않음)
				bn *= 2;
			cout << bn;
		}
		else                                // 나머지의 경우 지수가 0과 n이 아닐때
		{
			for (l = 0; l < i; l++)			// 2^i
				bn *= 2;
			cout << bn << " ";
		}
	}
	return 0;
}
