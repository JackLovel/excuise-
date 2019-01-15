#include <iostream>
#include <list>
#include <string>
#include <deque>

using std::deque;
using std::string;
using std::cout;
using std::endl;
using std::list;


int main()
{
    list<int> input{1, 2, 3, 4, 5};
    deque<int> deq1, deq2;

    for(auto iter = input.cbegin(); iter != input.cend(); ++iter)
    {
        if(*iter % 2)  // 如果为奇数
            deq1.push_back(*iter);
        else
            deq2.push_back(*iter);
    }


    for(auto i : deq1) cout << i << " ";
    cout << endl;

    for(auto j : deq2) cout << j << " ";
    cout << endl;

    return 0;
}
