#include<iostream>
using namespace std;

int main()
{
	int i, j, n, sum, in;	
	cin >> n;

	for (i = 0; i < n; i++)							//몇번 더할건지에 대한 반복
	{
		sum = 0;
		for (j = 0; j < 10; j++)					//10개의 숫자를 받는다.
		{
			cin >> in;								//in은 입력 숫자.
			if (in % 2 == 1)						//만약 홀수라면
				sum += in;							//sum에 더한다.
		
		cout << "#" << (i+1) << " " << sum << endl;	
	}
	return 0;
}