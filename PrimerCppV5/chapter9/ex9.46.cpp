#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string join_name(string &name, string const &pre, string const &suf)
{
    size_t pos = 0;             // 起始坐标 0
    name.insert(pos, pre);      // 通过索引来添加字符串
    size_t size = name.size();  // 未添加后缀时的字符串的长度
    return name.insert(size, suf);
}

int main()
{
    string name("Mo");
    cout << join_name(name, "Mr", "Jr");  // MrMoJr

    return 0;
}
