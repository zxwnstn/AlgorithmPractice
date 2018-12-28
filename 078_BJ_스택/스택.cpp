#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	stack<int> s;
	s.push(1);
	s.pop();
	while (t--)
	{
		string command;
		cin >> command;
		if (command == "push")
		{
			int x;
			cin >> x;
			s.push(x);
		}
		else if (command == "top")
		{
			if (s.size() == 0)
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
		else if (command == "size")
		{
			cout << s.size() << endl;
		}
		else if (command == "empty")
		{
			cout << s.empty() << endl;
		}
		else if (command == "pop")
		{
			if(s.size() == 0)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << s.top() << endl;
				s.pop();
			}
		}
	}
	return 0;

}