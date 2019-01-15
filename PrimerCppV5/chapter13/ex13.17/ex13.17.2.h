#ifndef EX13_17_2_H
#define EX13_17_2_H

#include <iostream>

class numbered{
public:
    numbered(){
        mysn = unique++;
    }

    numbered(const numbered& n){
        mysn = unique++;
    }

    int mysn;
    static int unique;
};

int numbered::unique = 10;

void f(numbered s){
   std::cout << s.mysn << std::endl;
}

#endif // EX13_17_2_H
