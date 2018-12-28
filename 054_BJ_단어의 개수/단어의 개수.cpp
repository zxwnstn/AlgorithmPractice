#include<iostream>
#include<string>
using namespace std;

int main()
{
	string in;
	getline(cin, in);
	int count = 1;

	for (int i = 0; i < in.length(); i++)
	{
		if (in[0] == ' ' && in.length()== 1)
		{
			count = 0;
			break;
		}

		else if (in[i] == ' ')
		{
			if (i == 0 || i == in.length() - 1)
				continue;
			else
				count += 1;
		}
			
	}
	cout << count << endl;
	return 0;
}