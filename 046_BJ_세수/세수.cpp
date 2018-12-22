#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A >= B && B >= C)
		cout << B;
	else if (C >= B && B >= A)
		cout << B;
	else if (B >= C && C >= A)
		cout << C;
	else if (A >= C && C >= B)
		cout << C;
	else if (B >= A && A >= C)
		cout << A;
	else if (C >= A && A >= B)
		cout << A;

	return 0;
}