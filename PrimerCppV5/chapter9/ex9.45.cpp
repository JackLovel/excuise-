#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

string add_pre_and_suffix(string name, string const& pre, string const& su)
{
    name.insert(name.begin(), pre.cbegin(), pre.cend()); // 通过迭代器来添加字符
    return name.append(su);
}

string join_name(string &name, string const &pre, string const &suf)
{
    size_t pos = 0;
    name.insert(pos, pre);   // 通过索引来添加字符串
    return name.append(suf);
}

int main()
{
    string name("Mo");
    
    // cout << join_name(name, "Mr", "Jr") << endl; // MrMoJr
    cout << add_pre_and_suffix(name, "Mr", "Jr") << endl; // MrMoJr
    return 0;
}
