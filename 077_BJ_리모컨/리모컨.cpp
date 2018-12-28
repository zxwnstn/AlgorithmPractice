#include<iostream>
#include<string>
using namespace std;
string usable_number;


//넘버링이 가능한지 판별하는 함수
int IsOkNumbering(int target_n, string broken) 
{
	string deft = "0123456789";
	string s_target = to_string(target_n);
	int len_b = broken.length();
	int len_tn = s_target.length();

	// deft배열안에 고장난 수를 '!' 로
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < len_b; j++)
		{
			if (deft[i] == broken[j])
			{
				deft[i] = '!';
				break;
			}
		}
	}

	// 목표숫자가 !인지 아닌지 확인
	int isok = 1;
	for (int i = 0; i < len_tn; i++)
	{
		if (deft[s_target[i]-48] == '!')
		{
			isok = 0;
			break;
		}
	}

	// deft를 usable number로 넘기기
	int index = 0;
	for (int i = 0; i < 10; i++)
	{
		if (deft[i] == '!')
			continue;
		else
			usable_number += deft[i];
	}

	return isok;
}

//+ - 만을 이용
int PlusOrMinus(int target_n)
{
	int result = target_n - 100;
	if (result < 0)
		return -result;
	else
		return result;
}

//넘버링이 가능한경우
int OnlyNumbering(int target_n)
{
	string s = to_string(target_n);
	int result = s.size();

	return result;
}

//넘버링이 불가능한 경우 n보다 큰 최소값
int Bigcombi(int n)
{
	cout << "함수내부! " << usable_number << "유저블넘" << endl;
	int len_usable = usable_number.length();
	string smallcomb = "";
	string s_target = to_string(n);
	int len = s_target.size();

	//타겟넘버의 맨 앞자리
	int front = (int)(s_target[0] - 48);
	cout << front << " front " << endl;

	// front와 최대값이 같은경우

	// front보다 최대값이 큰 경우

	// front 보다 최대값이 작은 경우

}

//넘버링이 불가능한 경우 n보다 작은 최대값
int Smallcombi(int n)
{
	cout << "함수내부! " << usable_number << "유저블넘" << endl;
	int len_usable = usable_number.length();
	string smallcomb = "";
	string s_target = to_string(n);
	int len = s_target.size();
	int result;

	//타겟넘버의 맨 앞자리
	int front = (int)(s_target[0]-48);
	cout << front << " front " << endl;
	cout << (int)usable_number[len_usable-1] -48 << endl;

	// front와 최대값이 같은경우
	
	if (front == (int)usable_number[len_usable-1] - 48)
	{
		cout << "front와 최대값이 같습니다!" << endl;
		int j = -1;
		int temp_s_j;
		while (1)
		{
			j++;
			for (int i = 0; i < len_usable; i++)
			{
				if (s_target[j] == usable_number[i])
				{
					smallcomb += usable_number[i];
				}
			}
			if (j + 1 != smallcomb.size())
			{
				temp_s_j = s_target[j];
				cout << j << "break됩니다!!" << endl;
				break;
			}
		}
		for (int i = 0; i < len_usable; i++)
		{
			if (temp_s_j < usable_number[i])
			{
				temp_s_j = usable_number[i];
				break;
			}
		}
		for (int i = 0; i < len - j; i++)
		{
			if (i == 0)
				smallcomb += temp_s_j;
			else
				smallcomb += usable_number[0];
		}
		cout << smallcomb << endl;
		result = atoi(smallcomb.c_str());
		result -= n;
		result += len;
		return result;
	}

	// front보다 최대값이 큰 경우
	
	else if (front < (int)usable_number[len_usable-1] - 48)
	{
		cout << "front보다 최대값이 큽니다!" << endl;
		for (int i = 0; i < len; i++)
		{
			if (i == 0)
				smallcomb += usable_number[len - 1];
			else
				smallcomb += usable_number[0];
		}
		cout << smallcomb << endl;
		result = atoi(smallcomb.c_str());
		result -= n;
		result += len;
		return result;
	}

	// front 보다 최대값이 작은 경우
	
	else if (front > (int)usable_number[len_usable-1] - 48)
	{
		cout << "front 보다 최대값이 작은 경우" << endl;
		for (int i = 0; i < len+1; i++)
		{
			if (i == 0)
			{	
				//usable의 최소값이 0라면
				cout << "usalbe의 최소값이 0입니다!" << endl;
				if (usable_number[0] == 0)
					smallcomb += usable_number[1];
				else
					smallcomb += usable_number[0];
			}
			else
				smallcomb += usable_number[0];
		}
		cout << smallcomb << endl;
		result = atoi(smallcomb.c_str());
		result -= n;
		result += len;
		return result;
	}

}


int main()
{
	
	int target_n;
	int n;
	string broken;
	cin >> target_n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{	
		char c;
		cin >> c;
		broken += c;
	}
	int okn;
	okn = IsOkNumbering(target_n, broken);

	int bigcbn, smlcbn, posn, numing_n;
	
	posn = PlusOrMinus(target_n);
	numing_n = OnlyNumbering(target_n);
	if (okn)
	{
		if (posn > numing_n)
			cout << posn;
		else
			cout << numing_n;
	}
	else
	{
		int small = 500000;
		bigcbn = 500; //Bigcombi(target_n);
		smlcbn = Smallcombi(target_n);
		cout << usable_number << endl;
		cout << Smallcombi << endl;
		int temp[] = { bigcbn, smlcbn, posn, numing_n };
		for (int i = 0; i < 4; i++)
		{
			if (small > temp[i])
				small = temp[i];
		}
		cout << small;
	}

	return 0;



}