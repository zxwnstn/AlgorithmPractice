#include<iostream>
#include<iomanip>
using namespace std;
double scores[1001];

int main()
{
	int t, n;
	double sum = 0;
	double count = 0;
	double aver;
	cin >> t;

	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> scores[i];
			sum += scores[i];
		}
		aver = sum / n;
		for (int i = 0; i < n; i++)
		{
			if (scores[i] > aver)
				count += 1;
		}
		cout << fixed << setprecision(3);
		cout << (count / n) * 100 << "\%" << endl;
		sum = 0;
		count = 0;
	}
	return 0;
}