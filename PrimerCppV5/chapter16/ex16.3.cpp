#include <iostream>

using namespace std;

class Sales_data{};

template <typename T>
int compare(const T &v1, const T &v2)
{
    if(v1 < v2) return -1;
    if(v1 > v2) return 1;
    return 0;
}

int main(void)
{    
    Sales_data item1, item2;
    cout << compare(item1, item2) << endl; 
    // error: no match for ‘operator<’ (operand types are ‘const Sales_data’ and ‘const Sales_data’)
    // if(v1 < v2) return -1;
    //    ~~~^~~~

    return 0;
}
