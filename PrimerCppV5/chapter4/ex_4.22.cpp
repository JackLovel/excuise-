// 在下面两个例子中，使用if-else if-else 更易读一些。

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	int grade = 78;

	// 使用条件运算符
	string faillGrade = (grade < 60) ? "fail"
		                             : (grade < 75) ? "low pass"
		                             : (grade < 90) ? "pass" : "high pass";

    // 使用if语句
    if (grade < 60)
		failGrade = "fail";
	else if (grade < 75)
		failGrade = "low pass";
	else if (grade < 90)
		failGrade = "pass";
	else
		failGrade = "hign pass";
		
	cout << faillGrade << endl;

	system("pause");
	return 0;
}