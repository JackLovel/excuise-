#include <iostream>
#include <string>

using namespace std;

namespace ch16 {
    template<typename T, unsigned size>
    T* begin_arr(T (&array)[size])
    {
        return array;
    }

    template<typename T, unsigned size>
    T* end_arr(T (&array)[size])
    {
        return array + size;
    }

}

int main()
{    
    string s[] = {"ssss", "aa", "ssssss", "kkkkkk"};

    cout << *(ch16::begin_arr(s)) << endl;
    cout << *(ch16::end_arr(s) - 1) << endl;
}
