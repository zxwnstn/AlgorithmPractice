//push_front X : 정수 X를 덱의 앞에 넣는다.
//push_back X : 정수 X를 덱의 뒤에 넣는다.
//pop_front : 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다.만약, 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//pop_back : 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다.만약, 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//size : 덱에 들어있는 정수의 개수를 출력한다.
//empty : 덱이 비어있으면 1을, 아니면 0을 출력한다.
//front : 덱의 가장 앞에 있는 정수를 출력한다.만약 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//back : 덱의 가장 뒤에 있는 정수를 출력한다.만약 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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