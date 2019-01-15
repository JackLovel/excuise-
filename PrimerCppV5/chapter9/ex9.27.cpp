#include <iostream>
#include <forward_list>

using std::forward_list;
using std::endl;
using std::cout;

int main()
{
    forward_list<int> flst = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while(curr != flst.end())
    {
        if(*curr % 2) // 若元素为奇数
            curr = flst.erase_after(prev);  // 删除并移动curr
        else {
            prev = curr; // 移动迭代器curr, 指向一个元素，prev指向
            ++curr;      // curr 之前的元素
        }
    }

    for(auto i : flst) cout << i << " ";
    cout << endl;
}
