#include <iostream>
#include <vector>

using std::cout;using std::begin;using std::end;using std::endl;

int main()
{
    int arr[] = {1, 2, 3, 4};

    std::vector<int> ivec(begin(arr), end(arr));

    for(auto i : ivec) cout << i << " ";
    cout << endl;

    return 0;
}