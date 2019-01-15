#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string replace_with(string &s, string const& oldVal, string const &newVal)
{
    for(auto cur = s.begin(); cur <= s.end() - oldVal.size();)
        if(oldVal == string{cur, cur + oldVal.size()})
            cur = s.erase(cur, cur + oldVal.size()), // 此时的cur为删除之后的元素
            cur = s.insert(cur, newVal.begin(), newVal.end()),
            cur += newVal.size();
        else
            ++cur;
}

int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };

    replace_with(s, "tho", "though");
    cout << s << endl;
    replace_with(s, "thru", "through");

    return 0;
}
