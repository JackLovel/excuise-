#include <iostream>
#include <string>

using namespace std;

namespace ch16_5 {
    template <typename T, unsigned size>
    T* begin_def(T(&arr)[size])
    {
        return arr;
    }

    template <typename T, unsigned size>
    T* end_def(T(&arr)[size])
    {
        return arr + size;
    }
}


int main()
{
    string s[] = {"ssss", "ss", "sssszzz"};
    cout << *(ch16_5::begin_def(s) + 1) << std::endl;
    cout << *(ch16_5::end_def(s) - 1) << endl;

    return 0;
}