#include<iostream>
#include<string>
using namespace std;
string usable_number;


//�ѹ����� �������� �Ǻ��ϴ� �Լ�
int IsOkNumbering(int target_n, string broken) 
{
	string deft = "0123456789";
	string s_target = to_string(target_n);
	int len_b = broken.length();
	int len_tn = s_target.length();

	// deft�迭�ȿ� ���峭 ���� '!' ��
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

	// ��ǥ���ڰ� !���� �ƴ��� Ȯ��
	int isok = 1;
	for (int i = 0; i < len_tn; i++)
	{
		if (deft[s_target[i]-48] == '!')
		{
			isok = 0;
			break;
		}
	}

	// deft�� usable number�� �ѱ��
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

//+ - ���� �̿�
int PlusOrMinus(int target_n)
{
	int result = target_n - 100;
	if (result < 0)
		return -result;
	else
		return result;
}

//�ѹ����� �����Ѱ��
int OnlyNumbering(int target_n)
{
	string s = to_string(target_n);
	int result = s.size();

	return result;
}

//�ѹ����� �Ұ����� ��� n���� ū �ּҰ�
int Bigcombi(int n)
{
	cout << "�Լ�����! " << usable_number << "�������" << endl;
	int len_usable = usable_number.length();
	string smallcomb = "";
	string s_target = to_string(n);
	int len = s_target.size();

	//Ÿ�ٳѹ��� �� ���ڸ�
	int front = (int)(s_target[0] - 48);
	cout << front << " front " << endl;

	// front�� �ִ밪�� �������

	// front���� �ִ밪�� ū ���

	// front ���� �ִ밪�� ���� ���

}

//�ѹ����� �Ұ����� ��� n���� ���� �ִ밪
int Smallcombi(int n)
{
	cout << "�Լ�����! " << usable_number << "�������" << endl;
	int len_usable = usable_number.length();
	string smallcomb = "";
	string s_target = to_string(n);
	int len = s_target.size();
	int result;

	//Ÿ�ٳѹ��� �� ���ڸ�
	int front = (int)(s_target[0]-48);
	cout << front << " front " << endl;
	cout << (int)usable_number[len_usable-1] -48 << endl;

	// front�� �ִ밪�� �������
	
	if (front == (int)usable_number[len_usable-1] - 48)
	{
		cout << "front�� �ִ밪�� �����ϴ�!" << endl;
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
				cout << j << "break�˴ϴ�!!" << endl;
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

	// front���� �ִ밪�� ū ���
	
	else if (front < (int)usable_number[len_usable-1] - 48)
	{
		cout << "front���� �ִ밪�� Ů�ϴ�!" << endl;
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

	// front ���� �ִ밪�� ���� ���
	
	else if (front > (int)usable_number[len_usable-1] - 48)
	{
		cout << "front ���� �ִ밪�� ���� ���" << endl;
		for (int i = 0; i < len+1; i++)
		{
			if (i == 0)
			{	
				//usable�� �ּҰ��� 0���
				cout << "usalbe�� �ּҰ��� 0�Դϴ�!" << endl;
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