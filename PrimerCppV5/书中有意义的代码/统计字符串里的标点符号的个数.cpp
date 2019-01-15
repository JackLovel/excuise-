#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{

    string s("Hello World!!!");

    // punct_cnt 与 s.size() 返回类型相同
    decltype(s.size()) punct_cnt = 0;

    for(auto c: s)
        if(ispunct(c))
            ++punct_cnt;

    cout << punct_cnt << endl;


    return 0;
}