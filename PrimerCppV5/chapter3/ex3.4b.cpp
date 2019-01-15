#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main()
{

    string str1, str2;

    while(cin >> str1 >> str2)
    {
        if(str1.size() == str2.size())
        {
            cout << "两个字符串相等。" << endl;
        }
        else
        {
            cout << "The larger string is " << ((str1.size() > str2.size()) ? str1 : str2);
        }
    }

    return 0;
}