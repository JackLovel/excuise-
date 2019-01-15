#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::endl;
using std::cout;
using std::list;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> ivev;
    for(int i : ia) ivev.push_back(i);

    list<int> ilist(ivev.begin(), ivev.end());

    for(auto iv = ivev.begin(); iv != ivev.end();)
        if(*iv % 2)
            iv = ivev.erase(iv);
        else
            ++iv;

    for(auto i : ivev) cout << i << " ";
    cout << endl;

    for(auto il = ilist.begin(); il != ilist.end();)
        if(!(*il % 2))
            il = ilist.erase(il);
        else
            ++il;

    for(auto i : ilist) cout << i << " ";
    cout << endl;
}