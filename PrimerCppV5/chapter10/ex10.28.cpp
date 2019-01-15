#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using std::list; using std::copy; using std::cout; using std::endl;

int main()
{
	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// uses inserter
	list<int> lst1;
	copy(vec.cbegin(), vec.cend(), inserter(lst1, lst1.begin()));
	for (auto i : lst1)
		std::cout << i << " ";
	std::cout << std::endl;



	// uses back_inserter
	list<int> lst2;
	copy(vec.cbegin(), vec.cend(), back_inserter(lst2));
	for (auto i : lst2)
		std::cout << i << " ";
	std::cout << std::endl;



	// uses front_inserter
	list<int> lst3;
	copy(vec.cbegin(), vec.cend(), front_inserter(lst3));
	for (auto i : lst3)
		std::cout << i << " ";
	std::cout << std::endl;
}