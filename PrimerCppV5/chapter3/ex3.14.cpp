#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;

int main()
{
    vector<int> v2;
    int value;

    while(cin >> value)
        v2.push_back(value);

    return 0;
}