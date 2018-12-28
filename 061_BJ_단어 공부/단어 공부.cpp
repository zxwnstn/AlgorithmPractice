#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char inputs[1000001];
int count_alph[26]{ 0, };
int sort_calph[26];

int main()
{
	cin >> inputs;
	int leng = strlen(inputs);
	for (int i = 0; i < leng; i++)
	{
		if (inputs[i] > 96)
			inputs[i] -= 32;
	}

	sort(inputs, inputs + leng);
	
	int count_temp = 1;
	int temp_index = 0;
	
	if (leng == 1)
		count_alph[0] = 1;
	for (int i = 0; i < leng-1; i++)
	{
		if (i == leng - 2)
		{
			if (inputs[i] == inputs[i + 1])
			{
				count_temp += 1;
				count_alph[temp_index] = count_temp;
			}
			else
			{
				count_alph[temp_index] = count_temp;
				count_alph[temp_index + 1] = 1;
			}
		}
		else if (inputs[i] == inputs[i + 1])
			count_temp += 1;
		else
		{
			count_alph[temp_index] = count_temp;
			count_temp = 1;
			temp_index++;
		}
	}


	copy(count_alph, count_alph + 26, sort_calph);
	sort(sort_calph, sort_calph + 26);
	
	for (int i = 0; i < 26; i++)
		cout << count_alph[i] << " ";
	cout << endl;

	for (int i =0; i<26; i++)
		cout << sort_calph[i] << " ";
	cout << endl;

	

	int indextemp = 0;
	if (sort_calph[25] == 0)
		cout << "?" << endl;
	else if (sort_calph[25] == sort_calph[24])
		cout << "?" << endl;
	else
		for (int i = 0; i < 26; i++)
		{
			if (count_alph[i] == sort_calph[25])
			{
				cout << inputs[indextemp] << endl;
				break;
			}
			else
				indextemp += count_alph[i];
		}
	

	return 0;

}