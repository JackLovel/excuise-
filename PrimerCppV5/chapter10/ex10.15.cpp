#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 42;
    auto add = [i](int num){return i + num;};
    cout << add(1) << endl;

    return 0;
}
