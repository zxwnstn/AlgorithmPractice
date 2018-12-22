#include<iostream>
#include<iomanip>
using namespace std;
double scores[1001];
double mani_scores[1001];

int main()
{
	int n;
	double max = 0;
	double sum = 0.0;
	cin >> n;
	cout.precision(3);

	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
		if (max < scores[i])
			max = scores[i];
	}
	for (int i = 0; i < n; i++)
	{
		mani_scores[i] = scores[i] / max * 100;
		sum += mani_scores[i];
	}
	double aver = sum / n;
	cout << aver << endl;

}
