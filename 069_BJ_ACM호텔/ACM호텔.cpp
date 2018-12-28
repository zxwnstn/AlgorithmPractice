#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int H, W, n;
		cin >> H >> W >> n;
		int roomnum, floor;

		if (n%H == 0)
			floor = H;
		else
			floor = n % H;

		if (n%H == 0)
			roomnum = n / H;
		else
			roomnum = n / H + 1;

		if (roomnum < 10)
			cout << floor << 0 << roomnum << endl;
		else
			cout << floor << roomnum << endl;
	}
	
	return 0;
}