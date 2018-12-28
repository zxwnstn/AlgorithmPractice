#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char croatia[100]{ 0, };
	cin >> croatia;
	int leng = strlen(croatia);
	int count = 0;
	for (int i = 0; i < leng; i)
	{
		if (croatia[i] == 'c')
		{
			if (croatia[i + 1] == '-' || croatia[i + 1] == '=')
			{
				count += 1; i += 2;
			}
			else
			{
				count += 1; i += 1;
			}
		}
		else if (croatia[i] == 'd')
		{
			if (croatia[i + 1] == '-')
			{
				count += 1; i += 2;
			}
			else if (croatia[i + 1] == 'z' && croatia[i + 2] == '=')
			{
				count += 1; i += 3;
			}
			else
			{
				count += 1; i += 1;
			}
		}
		else if (croatia[i] == 'l')
		{
			if (croatia[i + 1] == 'j')
			{
				count += 1; i += 2;
			}
			else
			{
				count += 1; i += 1;
			}
		}
		else if (croatia[i] == 'n')
		{
			if (croatia[i + 1] == 'j')
			{
				count += 1; i += 2;
			}
			else
			{
				count += 1; i += 1;
			}
		}
		else if (croatia[i] == 's')
		{
			if (croatia[i + 1] == '=')
			{
				count += 1; i += 2;
			}
			else
			{
				count += 1; i += 1;
			}
		}
		else if (croatia[i] == 'z')
		{
			if (croatia[i + 1] == '=')
			{
				count += 1; i += 2;
			}
			else
			{
				count += 1; i += 1;
			}
		}
		else
		{
			count += 1; i += 1;
		}
	}
	cout << count;
	return 0;
}