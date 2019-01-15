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
        if(str1 == str2)
        {
            cout << "两个字符串相等。" << endl;
        }
        else
        {
            cout << "The larger string is " << ((str1 > str2) ? str1 : str2);
        }
    }

    return 0;
}



