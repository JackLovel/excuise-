#include <iostream>

#include <iostream>
#include <vector>

using namespace std;

class Sales_data{};

template<typename T>
int compare(const T &lhs, const T &rhs)
{
    if(lhs < rhs) return -1;
    if(lhs > rhs) return 1;
    return 0;
}

int main()
{
    cout << compare(1, 3) << endl;
    vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
    cout << compare(vec1, vec2) << endl;

    Sales_data data1, data2;
    // cout << compare(data1, data2) << endl; // 错误：Sales_data 未定义 <
    
    return 0;
}