#ifndef EX13_05_H
#define EX13_05_H

#include <String>

class HasPtr{
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0){}
    HasPtr(const HasPtr& hp): ps(new std::string(*hp.ps)), i(hp.i){}

private:
    std::string *ps;
    int i;
}
#endif // EX13_05_H