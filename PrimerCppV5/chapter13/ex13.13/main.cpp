#include <iostream>
#include "ex13_05.h"

int main()
{
    X *px = new X;
    f(*px, *px);
    delete px;

    return 0;
}