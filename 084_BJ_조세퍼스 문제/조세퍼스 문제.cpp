#include<iostream>
#include<list>
#include<string>
using namespace std;
int arr[5001];

void Josepers(int N, int M)
{
	list<int> jose;
	for (int i = 1; i <= N; i++)
		jose.push_back(i);
	auto it = jose.begin();
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < M - 1; j++)
				it++;
			arr[i] = *it;
		}
		else
		{
			auto temp = it;
			it++;
			if (it == jose.end())
				it = jose.begin();
			jose.erase(temp);
			for (int j = 0; j < M - 1; j++)
			{	
				it++;
				if (it == jose.end())
				{
					it = jose.begin();
				}
			}
			arr[i] = *it;
		}
	}
}
//string Makestring(int n)
//{
//	string str;
//	for (int i = 0; i < n; i++)
//	{
//		str += (char)arr[i] + 48;
//		if (i != n - 1)
//		{
//			str += ',';
//			str += ' ';
//		}
//	}
//
//	return str;
//}

int main()
{
	int M, N;
	cin >> N >> M;
	Josepers(N, M);
	
	cout << "<";
	for (int i = 0; i < N; i++)
	{
		if (i == N - 1)
			cout << arr[i];
		else
			cout << arr[i] << ", ";
	}
	cout << ">";

	return 0;

}