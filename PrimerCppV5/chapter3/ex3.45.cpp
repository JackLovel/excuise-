#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ia[3][4] = {
		{ 0,1,2,3 },
	    { 4,5,6,7 },
	    { 8,9,10,11 },
	};

	// 范围for语句
	for (auto &row : ia)
	{
		for (auto col : row)
		{
			cout << col << endl;
		}
		cout << endl;
	}

	// 下标运算符
	for (auto i = 0; i != 3; ++i)
	{
		for (auto j = 0; j != 4; ++j)
		{
			cout << ia[i][j] << endl;
		}
		cout << endl;
	}

	// 使用指针
	for (auto p = ia; p != ia + 3; ++p)
	{
		for (int *q = *p; q != *p + 4; ++q)
		{
			cout << *q << endl;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}