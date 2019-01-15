#include "stdafx.h"
#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

bool compArr(int* b1, int* e1, int *b2, int *e2) 
{
	if ((e1 - b1) != (e2 - b2))
		return false;
	else
	{
		for (int* i = b1, *j = b2; (i != e1) && (j != e2); ++j, ++i)
			if (*i == *j)
				return false;
	}
}

int main()
{
	// 如果两个数组的个数相同并且相同位置的元素相等

	int arr1[] = {0,1,2};
	int arr2[] = {0,2,4};

	if (compArr(begin(arr1), end(arr1), begin(arr2), end(arr2))) 
	{
		cout << "两个数组相等" << endl;
	}
	else 
	{
		cout << "两个数组不相等" << endl;
	}

	vector<int> vec1 = { 0,1,2 };
	vector<int> vec2 = { 0,1,2 };

	if (vec1 == vec2) 
	{
		cout << "两个vector相等。" << endl;
	}
	else
	{
		cout << "两个vector不相等" << endl;
	}

	system("pause");
	return 0;
}

