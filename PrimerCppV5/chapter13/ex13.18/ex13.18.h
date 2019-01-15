#ifndef EX13_18
#define EX13_18
#include <String>

class Employee{
public:
    Employee();
    Employee(const std::string &name);

    const int id() const{ return id_;}

private:
    std::string name_;
    int id_;
    static int s_increment;
}
#endif // EX13_18
