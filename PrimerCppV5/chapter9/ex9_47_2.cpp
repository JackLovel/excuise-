#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void alp_up_low(string &alp)
{

    for(char a = 'a'; a <= 'z';)
    {
        alp.push_back(a),
        alp.push_back(toupper(a)),
        a += 1;
    }
}

int main()
{
    string str("ab2c3d7R4E6");
    string alp; // 字母表通过函数生成
    alp_up_low(alp);
    string num{"1234567890"};

    string::size_type pos = 0;
    while((pos = str.find_first_not_of(alp, pos)) != string::npos)
    {
        cout << str[pos] << " ";
        ++pos;
    }
    cout << endl;

    cout << "---------------------" << endl;

    string::size_type pos2 = 0;
    while((pos2 = str.find_first_not_of(num, pos2)) != string::npos)
    {
        cout << str[pos2] << " ";
        ++pos2;
    }
    cout << endl;

    return 0;
}
