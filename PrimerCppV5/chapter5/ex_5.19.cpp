#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::cin;
using std::string;

// 作为循环条件，不能定义在do内部
string status;
int main()
{
	do {
		cout << "please enter two values";
		string val1, val2;
		cin >> val1 >> val2;

		// 可以输入 'n' 或者 什么都不输入来，来退出重复输入
		cout << "short value is:"
			<< ((val1.length() > val2.length()) ? val1 : val2)
			<< "Enter 'n' or 'null string' to quit " << endl;
			
		cin >> status;
	} while (!status.empty() && status[0] != 'n');

	return 0;
}
