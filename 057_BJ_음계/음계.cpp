#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char numlist[10]{ NULL, } , asclist[10], dsclist[10];

	for(int i=0; i<8; i++)
		cin >> numlist[i];

	strcpy(asclist, numlist);
	strcpy(dsclist, numlist);
	
	sort(asclist, asclist + 8);
	sort(dsclist, dsclist + 8, greater<int>());
	
	if (strcmp(numlist, asclist) == 0)
		cout << "ascending";
	else if (strcmp(numlist, dsclist) == 0)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
	
}