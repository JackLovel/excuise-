#ifndef EX7_22_H
#define EX7_22_H

#include <string>
#include <iostream>

class Person
{
    friend std::istream &read(std::istream&, Person&);
    friend std::ostream &print(std::ostream &os, const Person&);
public:
    Person() = default;
    Person(const std::string sname, const std::string saddr):
        name(sname), Address(saddr){}

    std::string getName() const {return name;}
    std::string getAddress() const {return address;}

private:
    string Name;
    string Address;
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}
#endif // EX7_22_H