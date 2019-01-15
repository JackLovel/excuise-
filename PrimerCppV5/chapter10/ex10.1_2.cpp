#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::list;
using std::count;

int main()

{
    // 10.1
    vector<int> v = { 1, 2, 3, 4, 5, 6, 6, 6, 2 };
    cout << "ex 10.01: " << count(v.cbegin(), v.cend(), 6) << endl;

    // 10.2

    list<string> l = { "aa", "aaa", "aa", "cc" };
    cout << "ex 10.02: " << count(l.cbegin(), l.cend(), "aa") << endl;

    return 0;
}