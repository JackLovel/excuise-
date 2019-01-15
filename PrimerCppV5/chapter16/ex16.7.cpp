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

template<typename T, unsigned size>
constexpr unsigned getSize(const T(&)[size])
{
    return size;
}

int main()
{
    string s[] = {"ssss", "ss", "sssszzz"};
    cout << getSize(s) << endl;

    char c[] = "s";
    cout << getSize(c) << endl; // 2, 因为含有 "\0" 结束符

    return 0;
}