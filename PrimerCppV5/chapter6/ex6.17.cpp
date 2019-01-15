#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

bool any_capital(string const &str)
{
    for(auto ch : str)
        // 含有大写字母
        if(isupper(ch))
            return true;
    return false;
}

void to_lowercase(string &str)
{
    for(auto &ch : str) ch = tolower(ch);
}

int main(void)
{
    string hello("Hello World!");
    cout << any_capital(hello) << endl;

    to_lowercase(hello);
    cout << hello << endl;
    return 0;
}