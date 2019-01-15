#ifndef EX7_9_H
#define EX7_9_H

#include <string>
#include <iostream>

struct Person
{
    std::string const& getName() const {return name;}
    std::string const& getAddress() const {return address;}

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, const Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}
#endif // EX7_9_H
