#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

namespace ch16 {
    template<typename T>
    void print(T const& array)
    {
        for(auto const& item : array)
            cout << item << endl;
    }
}

int main()
{    
    int i[] = {1, 2, 3};
    string s[] = {"ssss", "aa", "ssssss"};
    char c[] = {'a', 'b', 'c'};

    ch16::print(i);
    ch16::print(s);
    ch16::print(c);
}
