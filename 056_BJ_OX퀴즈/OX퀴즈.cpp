#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string ox;
		cin >> ox;
		int cnt = 0;
		int temp = 0;
		for (int i = 0; i < ox.length(); i++)
		{
			if (ox[i] == 'O')
			{
				temp += 1;
				cnt += temp;
			}
			else
				temp = 0;
		}
		cout << cnt << endl;
	}
	return 0;
}