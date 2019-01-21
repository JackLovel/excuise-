#include <iostream>
#include <string>

using namespace std;

template<typename T, unsigned size>
constexpr unsigned getSize(const T (&)[size])
{
     return size;
}

int main()
{    
    string s[] = {"ssss", "aa", "ssssss", "kkkkkk"};

    cout << getSize(s) << endl;
}
