#include <iostream>
#include <string>
using namespace std;
int counts[10]{ 0, };

int main()
{
	int A, B, C, mul;
	cin >> A >> B >> C;
	mul = A * B * C;
	string conversion = to_string(mul);
	for (int i = 0; i < conversion.length(); i++)
	{
		if (conversion[i] == '0')
			counts[0] += 1;
		else if (conversion[i] == '1')
			counts[1] += 1;
		else if (conversion[i] == '2')
			counts[2] += 1;
		else if (conversion[i] == '3')
			counts[3] += 1;
		else if (conversion[i] == '4')
			counts[4] += 1;
		else if (conversion[i] == '5')
			counts[5] += 1;
		else if (conversion[i] == '6')
			counts[6] += 1;
		else if (conversion[i] == '7')
			counts[7] += 1;
		else if (conversion[i] == '8')
			counts[8] += 1;
		else if (conversion[i] == '9')
			counts[9] += 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << counts[i] << endl;
	}
	return 0;
}