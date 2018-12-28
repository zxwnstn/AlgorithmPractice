//#include<iostream>
//using namespace std;
//int sorted[100001];
//int input_arr[100001];
//
//void merge(int start, int mid, int end)
//{
//	cout << "start" << start << " end" << end << "함수로 진입했습니다." << endl;
//	int n, m, l;
//	n = start;
//	m = mid + 1;
//	l = start;
//
//	cout << "길이가 " << end - start + 1 << " 인 배열 입니다!" << endl;
//	while (n <= mid && m <= end)
//	{
//		if (input_arr[n] > input_arr[m])
//		{
//			sorted[l++] = input_arr[m++];
//		}
//		else
//		{
//			sorted[l++] = input_arr[n++];
//		}
//	}
//
//	cout << "1차 와일문 통과 " << endl;
//	if (n >= mid)
//	{
//		while (m <= end)
//			sorted[l++] = input_arr[m++];
//	}
//
//	if (m >= end)
//	{
//		while (n <= mid + 1)
//			sorted[l++] = input_arr[n++];
//	}
//	cout << "2차 와일문 통과" << endl;
//
//
//	for (int i = start; i <= end; i++)
//	{
//		input_arr[i] = sorted[i];
//		cout << input_arr[i];
//	}
//	cout << endl;
//
//	cout << "머지 함수 완료!" << endl;
//
//}
//
//void merge_sort(int start, int end)
//
//{
//	int mid;
//	if (start < end)
//	{
//		mid = (start + end) / 2;
//		cout << end - start + 1 << "함수 재귀합니다!" << endl;
//		merge_sort(start, mid);
//		merge_sort(mid + 1, end);
//		merge(start, mid, end);
//	}
//}
//
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> input_arr[i];
//
//	merge_sort(0, n - 1);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << input_arr[i] << endl;
//	}
//
//	return 0;
//}
#include<iostream>
using namespace std;
int sorted[1000001];
int input_arr[1000001];
int &ref_sorted = sorted[1000001];
int &ref_input = input_arr[1000001];

void merge(int start, int mid, int end)
{
	int n, m, l;
	n = start;
	m = mid + 1;
	l = start;

	while (n <= mid && m <= end)
	{
		if (input_arr[n] > input_arr[m])
		{
			sorted[l++] = input_arr[m++];
		}
		else
		{
			sorted[l++] = input_arr[n++];
		}
	}

	if (n >= mid)
	{
		while (m <= end)
			sorted[l++] = input_arr[m++];
	}

	if (m >= end)
	{
		while (n <= mid + 1)
			sorted[l++] = input_arr[n++];
	}


	for (int i = start; i <= end; i++)
	{
		input_arr[i] = sorted[i];
	}
}

void merge_sort(int start, int end)

{
	int mid;
	if (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(start, mid);
		merge_sort(mid + 1, end);
		merge(start, mid, end);
	}
}



int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> input_arr[i];

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << input_arr[i] << endl;
	}

	return 0;
}
