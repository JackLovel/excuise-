#include <iostream>
#include <string>

using namespace std;

namespace ch16_5 {
    template <typename T>
    void print(T const& arr)
    {
        for(auto const& elem : arr)
            cout << elem << endl;
    }
}


int main()
{
    int i[] = {1, 2, 3, 4};
    string s[] = {"ssss", "aa", "sssssss"};
    char c[] = {'a', 'b', 'c'};

    ch16_5::print(c);
    ch16_5::print(i);
    ch16_5::print(s);

    return 0;
}