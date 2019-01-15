#ifndef EX13_17_1_H
#define EX13_17_1_H

#include <iostream>

class numbered{
public:
    numbered(){
        mysn = unique++;
    }

    int mysn;
    static int unique;
};

int numbered::unique = 10;
void f(numbered s){
   std::cout << s.mysn << std::endl;
}
#endif // EX13_17_1_H
