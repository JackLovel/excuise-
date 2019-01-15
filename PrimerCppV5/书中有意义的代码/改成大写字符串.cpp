#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{

    string s("Hello World!!!");

    for(auto &c : s)   // 对于s中每个字符，c是一个引用
        c = toupper(c);
    
    cout << s << endl;

    return 0;
}