#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
	//vector<pair<int, int>> v1 { {10, 20} , {30, 40}};
	//auto it = v1.begin();
	//it += 1;
	//cout << it->first << endl;

	list<int> v1{ 1,2,3,4,5 };
	auto it = v1.begin();
	
	cout << *it << endl;
	it++;
	v1.erase(it);
	it++;
	cout << *it << endl;
	cout << endl;

	//for (auto it = v1.begin(); it != v1.end(); it++)
	//	cout << *it << " ";
	//list<int> v{ 1,2,3,4,5 };
	//vector<int> v1{ 1, 2, 3, 4, 5 };
	//auto it = v.begin();
	//it++;
	//it++;
	//auto is_big = [&](int number)
	//{
	//	return number > *it;
	//};
	//for (int &i : v)
	//{
	//	if (is_big(i))
	//		cout << i << endl;
	//}
}