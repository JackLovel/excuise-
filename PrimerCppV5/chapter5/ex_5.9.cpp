#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0;
	char ch;

	while (cin >> ch)
	{
		// 如果ch是元音字母，将其对就的计数值加1
		// ch 的值转换成整数类型，然后与每个case标签的值比较
		if (ch == 'a') {
			++aCnt;
		}
		else if (ch == 'e') {
			++eCnt;
		}
		else if (ch == 'i') {
			++iCnt;
		}
		else if (ch == 'o') {
			++oCnt;
		}
		else if (ch == 'u') {
			++uCnt;
		}
		else {
			++otherCnt;
		}

	}

	cout << "Number of aCnt: " << aCnt << endl;
	cout << "Number of eCnt: " << eCnt << endl;
	cout << "Number of iCnt: " << iCnt << endl;
	cout << "Number of oCnt: " << oCnt << endl;
	cout << "Number of uCnt: " << uCnt << endl;
	cout << "Number of otherCnt: " << otherCnt << endl;

    return 0;
}