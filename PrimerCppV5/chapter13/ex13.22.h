#ifndef HASPTR_H
#define HASPTR_H

#include <string>
using std::string;

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0){}

    HasPtr(const HasPtr& p):
        ps(new std::string(*p.ps)), i(*p.i){}

    HasPtr& operator=(const HasPtr &hp){
        auto new_p = new std::string(*hp.ps);
        delete ps;
        ps = new_p;
        i = hp.i;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    }

private:
    int i;
    string *ps;
};