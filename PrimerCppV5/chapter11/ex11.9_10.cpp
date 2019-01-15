#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main()
{
    // ex 11.9
    map<string, list<size_t>> m;

    // ex 11.10
    map<vector<int>::iterator, int> mv;
    map<list<int>::iterator, int> ml;

    vector<int> vi;
    mv.insert(pair<vector<int>::iterator, int>(vi.begin(), 0));

    // but when using this one the compiler complained that
    // error: no match for 'operator<' in '__x < __y'
    list<int> li;
    ml.insert(pair<list<int>::iterator, int>(li.begin(), 0));

    return 0;
}