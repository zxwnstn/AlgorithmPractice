#include<iostream>
using namespace std;
int num_list[1000];

void Swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}

int main()
{
	int n;
	cin >> n;
	int k = n;
	for (int i = 0; i < n; i++)
		cin >> num_list[i];

	while (n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (num_list[i] > num_list[i + 1])
				Swap(num_list[i], num_list[i + 1]);
			}
		n--;
	}

	for (int i = 0; i < k; i++)
		cout << num_list[i] << endl;

	return 0;
}