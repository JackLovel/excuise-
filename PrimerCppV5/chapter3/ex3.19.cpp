#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec2(10, 42);
    vector<int> vec1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> vec3;
    for(auto i =0; i != 10; ++i)
        vec3.push_back(42);

    cout << "第一种方案更好一点" << endl;

    return 0;
}