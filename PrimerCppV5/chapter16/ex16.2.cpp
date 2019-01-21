#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int compare(const T &v1, const T &v2)
{
    if(v1 < v2) return -1;
    if(v1 > v2) return 1;
    return 0;
}

int main(int argc, char *argv[])
{
    cout << compare(1, 0) << endl;

    vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
    cout << compare(vec1, vec2) << endl;

    return 0;
}

