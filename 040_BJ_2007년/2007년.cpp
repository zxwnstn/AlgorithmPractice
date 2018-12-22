#include<iostream>
#include<string>
using namespace std;
int calender[]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string week[]{ "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int Mondayconver(int month, int day)
{
	int sumday = 0;
	for (int i = 0; i < month; i++)
		sumday += calender[i];

	return sumday + day;
}

int main()
{
	int x, y;
	cin >> x >> y;
	int weekday = (Mondayconver(x, y)%7);
	cout << week[weekday] << endl;

	return 0;
}