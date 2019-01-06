#include<iostream>
#include<string>
#include<queue>
using namespace std;

void Quecmd(int n)
{
	queue<int> que = {};
	string cmd;
	while (n--)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int x;
			cin >> x;
			que.push(x);
		}
		else if (cmd == "pop")
		{
			if (!que.size())
				cout << -1 << endl;
			else
			{
				cout << que.front() << endl;
				que.pop();
			}
		}
		else if (cmd == "size")
		{
			cout << que.size() << endl;
		}
		else if (cmd == "empty")
		{
			cout << que.empty() << endl;
		}
		else if (cmd == "front")
		{
			if (que.size()==0)
				cout << -1 << endl;
			else
				cout << que.front() << endl;
		}
		else if (cmd == "back")
		{
			if (!que.size()==0)
				cout << -1 << endl;
			else
				cout << que.back() << endl;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	Quecmd(n);
	return 0;
}