#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::sort;
using std::unique;
using std::stable_sort;

void elimdups(vector<string> &vs)
{
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies(vector<string> &vs, size_t sz)
{
    elimdups(vs);

    // 按照大小排列，再按照字母顺序排列
    stable_sort(vs.begin(), vs.end(), [](string const &lhs, string const &rhs){
        return lhs.size() < rhs.size();
    });

    // 得到第一个 大于 sz 的迭代器
    auto wc = find_if(vs.begin(), vs.end(), [sz](string const &s){
          return s.size() >= sz;
    });

    // 打印结果
    for_each(wc, vs.end(), [](const string &s){
        cout << s << " ";
    });
}
int main()
{
    vector<string> v{"1234","1234","1234","hi~", "alan", "alan", "cp"};

    biggies(v, 3);
    cout << endl;

    return 0;
}
