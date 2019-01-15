#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::istream;

istream &func(istream &is) 
{
	string buf;
	while (is >> buf)
		cout << buf << endl;
	is.clear();  // 流复位
	return is;
}