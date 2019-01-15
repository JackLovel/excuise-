#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{

    /**
    * sought: 为要搜索的数字
    */
	int sought = 33;
	vector<int> text = { 22,33,41,51,344,2000 };
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;

	while (mid != end && *mid != sought)
	{
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}

	system("pause");
    return 0;
}

