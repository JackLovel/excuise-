#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<char> cvec{'a', 'c', 'd', 'e'};
    string str(cvec.begin(), cvec.end());

    cout << str << endl;

    return 0;
}
