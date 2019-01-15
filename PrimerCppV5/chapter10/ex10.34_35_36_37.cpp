#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;
int main()
{
    vector<int> vec{0, 1, 2, 3, 4};
    list<int>lst{0, 1, 2, 3, 0, 5};
    vector<int> vec2{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 10.34
    for(auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter)
        cout << *r_iter << " ";
    cout << endl;

    // 10.35
    for(auto iter = vec.cend()-1; iter != vec.begin()-1; --iter)
        cout << *iter << " ";
    cout << endl;

    // 10.36
    auto found_0 = find(lst.crbegin(), lst.crend(), 0);
    cout << distance(found_0, lst.crend()) << endl;


    // 10.37
    list<int> ilst(5);
    copy(vec2.cbegin()+3, vec2.cbegin()+8, ilst.rbegin());

    for(auto i: ilst) cout << i << " ";
    cout << endl;
}
