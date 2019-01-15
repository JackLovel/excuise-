#ifndef EX13_05_H
#define EX13_05_H

#include <String>
#include <vector>

struct X
{
    X() {std::cout << "X()" << std::endl;}                  // 构造函数
    X(const X&) {std::cout << "X(const X&)" << std::endl;}  // 拷贝构造函数
    X& operator=(const X&){
        std::cout << "X& operator=(const X&)" << std::endl;
        return *this;
    }
    ~X(){ std::cout << "~X()" << std::endl; }
};

void f(const X &rx, X x)
{
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);
    vec.push_back(x);
}
#endif // EX13_13_H