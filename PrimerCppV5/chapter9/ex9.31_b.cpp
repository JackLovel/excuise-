#include <iostream>
#include <forward_list>

using std::forward_list;
using std::advance;
using std::endl;
using std::cout;

int main()
{
    forward_list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto cur = li.begin();
    auto prev = li.before_begin();

    while(cur != li.end())
        if(*cur % 2){
            cur = li.insert_after(prev, *cur);
            advance(cur, 2);
            advance(prev, 2);
        } else
            cur = li.erase_after(prev);


    for(auto i : li) cout << i << " ";
    cout << endl;
}
