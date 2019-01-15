#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[25] = "Alan";
    for(const auto &w : m) cout << w.first << ": " << w.second << " ";
    cout << endl;
    
    map<int, string>::iterator it = m.begin();
    it->second = "wang";  // 可以改变值，但是不可以改变键的值
    for(const auto &w : m) cout << w.first << ": " << w.second << " ";
    
    return 0;
}