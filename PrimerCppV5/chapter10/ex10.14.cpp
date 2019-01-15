#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;
using std::endl;
using std::accumulate;

auto sum = [](vector<int> &ivec)
            {return accumulate(ivec.begin(), ivec.end(), 0);};
int main()
{
    vector<int> ivec{1, 2, 3, 4};
    cout << sum(ivec) << endl;

    return 0;
}
