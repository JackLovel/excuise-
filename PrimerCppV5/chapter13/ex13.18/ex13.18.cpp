
#include "ex13.18.h"


Employee::Employee(){
    id_ = ++s_increment;
}

Employee::Employee(const std::string &name){
    name_ = name;
    id_ = ++s_increment;
}

int main(){
    return 0;
}
