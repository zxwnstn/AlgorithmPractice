//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char alphlist[101] = { NULL, };
//	int outputlist[26];
//	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
//	for (int i = 0; i < 26; i++)
//		outputlist[i] = -1;
//
//	
//	cin >> alphlist;
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < strlen(alphlist); j++)
//		{
//			if (alphabet[i] == alphlist[j])
//			{
//				outputlist[i] = j;
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (i == 25)
//			cout << outputlist[i];
//		else
//			cout << outputlist[i] << " ";
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int arr[26]{ 0, };
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (alpha[i] == s[j])
				arr[i] += 1;
		}
	}
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
	return 0;
}