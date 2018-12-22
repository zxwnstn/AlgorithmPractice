#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;


//들어온 문자열을 2진수로 바꾸는 함수
string Bi_Conv(int a)
{
	int temp = a;
	string s = "";

	while (1)
	{
		if (temp == 1)
		{
			s += "1";
			return s
				;
		}
		else if (temp == 0)
		{
			s += "0";
			return s;
		}
		else if (temp % 2 == 1)
			s += "1";
		else if (temp % 2 == 0)
			s += "0";

		temp = temp / 2;
	}
}

//Bi_Conv를 거친 문자열을 뒤집어 6자리 2진수로 바꾸는 함수
string Reverse_add0(string a)
{
	string temp_s = "";
	if (a.length() == 1)
		a += "00000";
	else if (a.length() == 2)
		a += "0000";
	else if (a.length() == 3)
		a += "000";
	else if (a.length() == 4)
		a += "00";
	else if (a.length() == 5)
		a += "0";

	for (int i = a.length() - 1; i >= 0; i--)
	{
		temp_s += a[i];
	}

	return temp_s;
}

int String_char(string bit8)
{
	int a = 0;
	for (int i = 7; i >= 0; i--)
	{
		//cout << bit8[i] << endl;
		if ( i==7 && bit8[i] == '1')
		{
			a += 1;
		}
		else if (bit8[i] == '1')
		{
			a += pow(2, 7 - i);
		}
		
	}
	return a;
}
int main()
{
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+\\";
	string intput_char;
	int t;
	cin >> t;
	while(t--)
	{ 
		cin >> intput_char;
		vector<int> my_arr(intput_char.length());

		//입력받기
		for (int i = 0; i < intput_char.length(); i++)
		{
			for (int j = 0; j < a.length(); j++)
			{
				if (intput_char[i] == a[j])
					my_arr[i] = j;
			}
		}

		//6자리 2진수로 처리
		string s1 = "";
		string all = "";
		for (int k = 0; k < my_arr.size(); k++)
		{
			string temp = Bi_Conv(my_arr[k]);
			all += Reverse_add0(temp);
		}
		//cout << "변환완료 " << all << endl;

		//2진수를 8개 비트단위로 묶기
		int size_all = all.length() / 8;
		string temp;
		for (int l = 0; l < all.length(); l++)
		{
			temp += all[l];
			if (l % 8 == 7)
			{
				//cout << temp << endl;
				cout << (char)String_char(temp);
				temp = "";

			}
		}
		cout << endl;
	}
	system("pause");
	return 0;

}
