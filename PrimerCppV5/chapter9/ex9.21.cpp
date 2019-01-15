#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;

int main()
{
    vector<string> svec;
    auto iter = svec.begin();

    for(string value; cin >> value; iter = svec.insert(iter, value));
}
