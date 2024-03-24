#include "Pair.h"
#include <iostream>

Pair::Pair(int a, int b)
{
    pa = new int;
    pb = new int;

    *pa = a;
    *pb = b;

    std::cout << "CUSTOM DEFAULT CONSTRUCTOR CALLED!" << std::endl;
};

Pair::Pair(const Pair& p)
{
    pa = new int;
    pb = new int;

    *pa = *p.pa;
    *pb = *p.pb;

    std::cout << "COPY CONSTRUCTOR CALLED!" << std::endl;
};

Pair::~Pair()
{
    std::cout << "DESTRUCTOR CALLED" << std::endl;
};