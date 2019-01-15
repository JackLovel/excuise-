#ifndef EX7_15
#define EX7_15

#include <string>
#include <iostream>

std::istream &read(std::istream &, Person &);
std::ostream &print(std::ostream &, const Person &);

class People
{
public:
    People() = default;
    People(const std::string sname, const std::string saddr):
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
#endif // EX7_15