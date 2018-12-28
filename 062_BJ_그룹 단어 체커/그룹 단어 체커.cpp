#include<iostream>
#include<set>
using namespace std;



int isGroupstr(char str[])
{
	int leng = strlen(str);
	int temp_index = 1;
	char compstr[101]{0, };
	set<int> compareset;
	
	if (leng == 1)
		compstr[0] = str[0];
	for (int i = 0; i < leng-1; i++)
	{
		if (i == 0)
		{
			compstr[0] = str[i];
		}
		if (str[i] != str[i + 1])
		{
			compstr[temp_index] = str[i + 1];
			temp_index++;
		}
	}

	int compstrlen = strlen(compstr);
	for (int i = 0; i < compstrlen; i++)
		compareset.insert(compstr[i]);
	int comparesetlen = compareset.size();


	if (comparesetlen == compstrlen)
		return 1;
	else
		return 0;
	
}

int main()
{
	int n, groupcnt = 0;
	cin >> n;
	
	while (n--)
	{
		char inputs[101];
		cin >> inputs;
		groupcnt += isGroupstr(inputs);
	}
	cout << groupcnt << endl;
	return 0;
}