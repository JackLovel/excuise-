#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::cout;
using std::list;

int main()
{
    list<int> li = {1, 2, 3};
    vector<double> vec(li.begin(), li.end());
    //vector<double> vec2(li);  // 不能进行拷贝初始化

    for(auto v : vec)
        cout << v << " ";
    return 0;
}