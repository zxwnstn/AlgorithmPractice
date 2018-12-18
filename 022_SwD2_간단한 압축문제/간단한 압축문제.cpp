#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int act_n;
		cin >> act_n;
		string s;
		string sum_s;
		string ins;
		int ins_n;

		//string 받기
		for (int j = 0; j < act_n; j++)
		{
			cin >> ins >> ins_n;
			for (int k = 0; k < ins_n; k++)
			{
				s += ins;
			}
			sum_s += s;
			s = "";
			ins = "";
			ins_n = 0;
		}
		// 출력부
		cout << "#" << i + 1 << endl;
		for (int l = 0; l < sum_s.length(); l++)
		{
			if (l == 0)
			{
				cout << sum_s[l];
			}
			else if (l % 10 == 0)
			{
				cout << endl;
				cout << sum_s[l];
			}
			else
				cout << sum_s[l];
			
		}
	}
	//system("pause");
	return 0;
	
}