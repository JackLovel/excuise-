#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>


using std::list;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	list<int> li{ 1, 2, 3, 4, 5 };
	vector<int> v1{ 1, 2, 3, 4, 5 };
	vector<int> v2{ 1, 2, 3, 4 };


    // 
	cout << (vector<int>(li.begin(), li.end()) == v1 ? "true" :"false") << endl;
	cout << (vector<int>(li.begin(), li.end()) == v2 ? "true" :"false") << endl;
}