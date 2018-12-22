#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int million(vector<int> a, int length_a)
{
	int count = 0;
	int bigest_n = 0;

	set<int> b;
	//배열의 크기가 1이라면
	if (length_a == 1)
	{
		return 0;
	}
	//배열이 모두 같다면
	for (int x = 0; x < length_a; x++)
	{
		b.insert(a[x]);
	}
	if (b.size() == 1)
		return 0;

	//최대값구하기
	for (int j = 0; j < length_a; j++)
	{
		if (bigest_n < a[j])
		{
			bigest_n = a[j];
		}
	}
	for (int j = 0; j < length_a; j++)
	{
		if (bigest_n < a[j])
		{
			bigest_n = a[j];
		}
	}
	auto temp_j = max_element(a.begin(), a.end());

	//cout << temp_j << " " << bigest_n << endl;
	//최대값까지의 배열저장

	int temp2_len = length_a - temp_j - 1;
	vector<int> temp2(temp2_len, 0);
	//cout << temp2_len << endl;
	for (int k = 0; k < length_a ; k++)
	{
		if (a[k] == bigest_n)
		{
			count += 0;
			break;
		}
		count += bigest_n - a[k];
	}

	for (int l = 0; l < temp2_len; l++)
	{
		temp2[l] = a[temp_j + l + 1];
		//cout << temp2[l] << " " ;
	}
	//cout << "카운트입니다 " <<count << endl;

	return count + million(temp2, temp2_len);
}

int main()
{
	int t;
	cin >> t;
	int index = 1;
	while (t--)
	{
		int arr_num;

		cin >> arr_num;
		vector<int> b(arr_num, 0);
		for (int i = 0; i < arr_num; i++)
		{
			cin >> b[i];
		}
		cout << "#" << index << " " << million(b, arr_num) << endl;
		index++;
	}

	system("pause");
	return 0;
}