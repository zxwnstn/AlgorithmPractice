#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char input_num[10]{ 0, };
int count_n[10]{ 0, };


int main()
{
	cin >> input_num;
	int leng = strlen(input_num);

	for (int i = 0; i < leng; i++)
	{
		if (input_num[i] == '0')
			count_n[0] += 1;
		else if (input_num[i] == '1')
			count_n[1] += 1;
		else if (input_num[i] == '2')
			count_n[2] += 1;
		else if (input_num[i] == '3')
			count_n[3] += 1;
		else if (input_num[i] == '4')
			count_n[4] += 1;
		else if (input_num[i] == '5')
			count_n[5] += 1;
		else if (input_num[i] == '6')
			count_n[6] += 1;
		else if (input_num[i] == '7')
			count_n[7] += 1;
		else if (input_num[i] == '8')
			count_n[8] += 1;
		else if (input_num[i] == '9')
			count_n[6] += 1;
	}

	if (count_n[6] % 2 == 1)
		count_n[6] = count_n[6] / 2 + 1;
	else
		count_n[6] = count_n[6] / 2;

	sort(count_n, count_n + 10);

	cout << endl;
	cout << count_n[9] << endl;
	return 0;
}