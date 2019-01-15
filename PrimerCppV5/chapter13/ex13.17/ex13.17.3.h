#ifndef EX13_17_3_CPP
#define EX13_17_3_CPP


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

void f(const numbered& s){
   std::cout << s.mysn << std::endl;
}

#endif // EX13_17_3_CPP
