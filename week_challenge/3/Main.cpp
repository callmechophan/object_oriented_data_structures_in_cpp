#include <iostream>
#include "Pair.h"

int main()
{
    Pair p(15,16);
    Pair q(p);

    std::cout << p.pa << std::endl;
    std::cout << q.pa << std::endl;

    Pair *hp = new Pair(23,42);
    delete hp;

    return 0;
};