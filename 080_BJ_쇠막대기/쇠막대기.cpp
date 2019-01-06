#include<iostream>
#include<stack>
#include<string>
using namespace std;

int Cut_stick(string str)
{
	stack<int> st_st;
	int cut_number = 0;
	int temp_top;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			st_st.push(i);
			temp_top = st_st.top();
		}
		else
		{
			if (i - temp_top == 1)
			{
				st_st.pop();
				cut_number += st_st.size();
			}
			else
			{
				st_st.pop();
				cut_number++;
			}
		}
	}
	return cut_number;

}

int main()
{
	string stick;
	cin >> stick;
	cout << Cut_stick(stick) << endl;
}