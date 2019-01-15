#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	std::vector<int> vec{ 1, 2, 3, 4, 5 };
	std::vector<double> dvec{1.1, 2.2, 3.3, 4.4, 5.0};

	std::cout << std::accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;

	// ex10.4 结果返回的是 int 类型， 而不是 double 类型
	// accumlate 的第三个参数的类型决定了函数中 返回值类型。
    std::cout << std::accumulate(dvec.cbegin(), dvec.cend(), 0) << std::endl;  // 结果 15, 而不是 15.6

	return 0;
}