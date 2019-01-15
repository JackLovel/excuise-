#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{

    vector<int> v;
    cout << v.at(0);       // 抛出 out_of_range 异常
    cout << v[0];          // 函数行为未定义
    cout << v.front();     // 函数行为未定义
    cout << *v.begin();    // 函数行为未定义

    return 0;
}