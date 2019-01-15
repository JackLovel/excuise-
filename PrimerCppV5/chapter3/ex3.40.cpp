#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

const char cstr1[] = "Hello";
const char cstr2[] = "world!";

int main()
{
	// 引处加二的原因：strlen不计算字符串 结尾的空字符的个数
    constexpr size_t new_size = strlen(cstr1) + strlen(cstr2) + 2;
    char cstr3[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
}
