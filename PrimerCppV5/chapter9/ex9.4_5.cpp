#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

bool contains(vector<int>::const_iterator first,
              vector<int>::const_iterator last, int value)
{
    for(; first != last; ++first)
        if(*first == value) return true;
    return false;
}

vector<int>::const_iterator find(vector<int>::const_iterator first,
                                 vector<int>::const_iterator last, int value)
{
    for(; first != last; ++first)
        if(*first == value) return first;
    return last;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 6, 14, 22, 21};

    auto first = vec.begin();
    auto last = vec.end();

    cout << contains(first, last, 3) << endl;   // 找到了，返回 1(true)
    cout << *(find(first, last, 3)) << endl;    // 找到了，返回对应的值
    cout << *(find(first, last, 100)) << endl;  // 未找到

    return 0;
}
