#include<iostream>
#include<list>
#include<string>
using namespace std;
list<char> str;


void Print()
{
	for (auto it = str.begin(); it != str.end(); it++)
		cout << *it;
}

void Cmd(int n)
{
	auto it = str.end();
	it--;
	while (n--)
	{
		char command;
		cin >> command;
		auto temp = it;

		if (command == 'L')
		{
			if (it == str.begin())
			{
				continue;
			}
			else
			{
				char tempc;
				--it;
				tempc = *it;
				*temp = tempc;
				*it = '!';
			}
		}

		else if (command == 'D')
		{
			auto temp = it;
			++it;
			if (it == str.end())
			{
				--it;
			}
			else
			{
				char tempc;
				tempc = *it;
				*temp = tempc;
				*it = '!';
			}
		}

		else if (command == 'B')
		{
			auto temp = it;
			
			if (it != str.begin())
			{
				temp--;
				str.erase(temp);
			}
		}

		else if (command == 'P')
		{
			char x;
			cin >> x;
			str.insert(it, x);
		}
	}
	str.erase(it);
}

int main()
{
	string ipt;
	cin >> ipt;
	for (char &x : ipt)
		str.push_back(x);
	str.push_back('!');
	Print();
	int n;
	cin >> n;
	Cmd(n);
	Print();
	return 0;
}