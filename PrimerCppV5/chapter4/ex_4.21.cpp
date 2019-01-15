#include "stdafx.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> nums = { 11,2,12,32,33,44,55,1,0 };
	vector<int> result = {};

	for (auto &i : nums)
	{
		int num = ((0 == i % 2) ? i : 2 * i);
		result.push_back(num);
	}

	for (auto &j : result)
		cout << j << endl;
	cout << endl;

	system("pause");
	return 0;
}