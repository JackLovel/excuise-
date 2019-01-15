#include "stdafx.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

bool is_prefix(vector<int> const& lhs, vector<int> const& rhs) {
	// 第一步：如果 lhs 长度大于 rhs
	if (lhs.size() > rhs.size()) {
		return is_prefix(rhs, lhs);
	}

	// 第二步：找到了最短的哪个(即 lhs)
	for (unsigned i = 0; i != lhs.size(); ++i)
		if (lhs[i] != rhs[i])  // lhs每一个值 是否等于 rhs前缀
			return false;

	// 如果 lhs 第一个值为 rhs 前缀，我们返回true
	return true;
}

int main()
{
	vector<int> l{ 0,1,2 };
	vector<int> r{ 0,1,2,3,4 };

	cout << (is_prefix(r, l) ? "yes\n" : "no\n");

	system("pause");
    return 0;
}