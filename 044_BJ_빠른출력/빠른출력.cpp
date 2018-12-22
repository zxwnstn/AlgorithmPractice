#include<stdio.h>
using namespace std;


int main()
{
	int t;
	int x, y;
	scanf("%d", &t);
	while (t--)
	{
		x = 0;
		y = 0;
		scanf_s( "%d %d", &x, &y);
		printf("%d\n", x + y);
	}
	return 0;
}