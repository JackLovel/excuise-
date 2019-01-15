#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::vector;
using std::fill_n;
using std::endl;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5};
    fill_n(ivec.begin(), ivec.size(), 0);

    for(auto i:ivec) cout << i << " ";
    cout << endl;

    return 0;
}
