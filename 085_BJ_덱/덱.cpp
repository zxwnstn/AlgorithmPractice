//push_front X : ���� X�� ���� �տ� �ִ´�.
//push_back X : ���� X�� ���� �ڿ� �ִ´�.
//pop_front : ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�.����, ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//pop_back : ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�.����, ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//size : ���� ����ִ� ������ ������ ����Ѵ�.
//empty : ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
//front : ���� ���� �տ� �ִ� ������ ����Ѵ�.���� ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//back : ���� ���� �ڿ� �ִ� ������ ����Ѵ�.���� ���� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//
#include<iostream>
#include<deque>
#include<string>
using namespace std;

void DequeCmd(int n)
{
	string cmd;
	deque<int> d;
	while (n--)
	{
		cin >> cmd;
		if (cmd == "push_front")
		{
			int x;
			cin >> x;
			d.push_front(x);
		}
		else if (cmd == "push_back")
		{
			int x;
			cin >> x;
			d.push_back(x);
		}
		else if (cmd == "pop_front")
		{
			if (d.empty())
				cout << -1 << endl;
			else
			{
				cout << d.front() << endl;
				d.pop_front();
			}
				
		}
		else if (cmd == "pop_back")
		{
			if (d.empty())
				cout << -1 << endl;
			else
			{
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		else if (cmd == "size")
		{
			cout << d.size() << endl;
		}
		else if (cmd == "empty")
		{
			cout << d.empty() << endl;
		}
		else if (cmd == "front")
		{
			if (d.empty())
				cout << -1 << endl;
			else
			{
				cout << d.front() << endl;
			}
		}
		else if (cmd == "back")
		{
			if (d.empty())
				cout << -1 << endl;
			else
			{
				cout << d.back() << endl;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	DequeCmd(n);
	return 0;
}