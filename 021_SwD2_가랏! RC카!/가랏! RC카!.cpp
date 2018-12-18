#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int action_n;
		cin >> action_n;

		int distance = 0;
		int vell = 0;

		for (int j = 0; j < action_n; j++)
		{
			int con, acell;
			cin >> con;

			if (con == 0)
			{
				distance += vell;
				continue;
			}

			cin >> acell;

			if (con == 1)
			{
				vell += acell;
				distance += vell;
			}

			else if (con == 2)
			{
				if (vell - acell < 0)
				{
					vell = 0;
				}
				else
				{
					vell -= acell;
					distance += vell;
				}
			}
		}
		cout << "#" << i + 1 << " " << distance << endl;
	}

	return 0;
}