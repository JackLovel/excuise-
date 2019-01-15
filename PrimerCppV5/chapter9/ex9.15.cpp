#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> vec1 = { 1, 3, 5, 7, 9, 12 };
    vector<int> vec2 = { 1, 3, 9 };

    cout << ((vec1 == vec2) ? "true": "false") << endl;

    return 0;
}
