#include<iostream>
#include<list>
using namespace std;

int arr[1001];

void GetIndex(list<pair<int, int>> balloon, int n)
{
	auto iter = balloon.begin();
	int i = 0;
	int moving;
	const int first_n = n;
	while (n)
	{
		if (n == 1)
		{
			iter = balloon.begin();
			arr[i] = iter->second;
		}
		else
		{
			arr[i] = iter->second;
			moving = iter->first;
			auto temp = iter;

			if (moving < 0)
			{
				moving = -moving;
				for (int j = 0; j < moving ; j++)
				{
					if (iter == balloon.begin())
					{
						if (j == 0)
							for (int k = 0; k < n - 1; k++)
								iter++;
						else
							for (int l = 0; l < n - 2; l++)
								iter++;
					}
					else
						iter--;
					if (j == 0)
						balloon.erase(temp);
				}
			}
			else if (moving > 0)
			{
				for (int j = 0; j < moving; j++)
				{
					++iter;
					if (j == 0)
						balloon.erase(temp);
					if (iter == balloon.end())
					{
						iter = balloon.begin();
					}
				}
			}
		}
		i++;
		n--;
	}
}

void Print_arr(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int n;
	cin >> n;
	list<pair<int, int>> balloon;

	for (int i = 1; i <= n; i++)
	{
		int ipt;
		cin >> ipt;
		balloon.push_back({ ipt, i });
	}
	GetIndex(balloon, n);
	Print_arr(n);

	return 0;
}