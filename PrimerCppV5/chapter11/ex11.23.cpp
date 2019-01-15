/**
*  emplace 的用法(https://zh.cppreference.com/w/cpp/container/map/emplace)
*  map<string, string> map_obj;
** map_obj.emplace("a", "b");
***************/
#include <map>
#include <string>
#include <iostream>

using std::string;
using std::multimap;
using std::cin;
using std::endl;

int main()
{
    multimap<string, string> families;
    for (string lname, cname; cin >> cname >> lname; families.emplace(lname, cname));
    for (auto const& family : families)
        std::cout << family.second << " " << family.first << endl;
}