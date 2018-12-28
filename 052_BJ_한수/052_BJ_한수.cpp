#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
			count += 1;
		else if ((i/100)-((i/10)%10)==  ((i / 10) % 10)- (i%10))
			count +=1;			
	}

	cout << count << endl;
	return 0;
}