#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, temp_a, temp_b;
	cin >> n;
	string alph = "abcdefghijklmnopqrstuvwxyz";
	string ualph;
	string output;

	for (int i = 0; i < n; i++)
	{
		int len, ulen;
		cin >> len >> ulen;
		
		temp_a = len / ulen;
		temp_b = len % ulen;

		for (int j = 0; j < ulen; j++)
		{
			ualph += alph[j];
		}

		
		for (int k = 0; k < temp_a; k++)
		{
			output += ualph;
		}
		for (int l = 0; l < temp_b; l++)
		{
			output += ualph[l];
		}
		cout << output << endl;
		ualph = "";
		output = "";
	}

	return 0;
}