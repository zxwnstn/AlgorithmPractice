#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<deque>
using namespace std;

//void print(vector<int> v)
//{
//	int l = v.size();
//	for (int i = 0; i < l; i++)
//		cout << v[i] << " ";
//	cout << endl;
//}

void print(deque<int> d)
{
	int l = d.size();
	for (int i = 0; i < l; i++)
		cout << d[i] << " ";
	cout << endl;
}

int main()
{
	deque<int> d = { 1, 2, 3, 4, 5 };

	print(d);
	d.push_back(6); print(d);
	d.pop_back(); print(d);

	stack<int> s(d);

	s.push(3);
	s.push(2);


	/*pair<int, int> p2(20, 30);
	cout << p2.first << p2.second << endl;

	vector<int> v1 = { 1, 2, 3, 4, 5 };
	for (int &x : v1)
	{
		cout << x;
	}
	cout << endl;
	print(v1);
	vector<int> a = { 1, 2, 4, 2, 3, 4, 1, 7, 8 };
	int even = count_if(a.begin(), a.end(), [](int x) {return x == 3; });

	cout << even << " 3ÀÇ °³¼ö" << endl;*/
	return 0;
}
