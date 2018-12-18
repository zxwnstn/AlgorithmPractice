#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;

int main()
{
	//ÀÔ·ÂºÎ
	int n;
	cin >> n;

	for(int i = 0; i < n ; i++)
	{
		int my_sheep;
		cin >> my_sheep;

		int count = 1;
		set<int> s;
		int temp;

		while (1)
		{
			temp = my_sheep * count;
			string sheep = to_string(temp);
			for (int j = 0; j < sheep.length(); j++)
				s.insert(sheep[j]);

			if (s.size() == 10)
				break;

			count += 1;
		}

		cout << "#" << i +1 << " " << temp << endl;
	}

	return 0;
}
