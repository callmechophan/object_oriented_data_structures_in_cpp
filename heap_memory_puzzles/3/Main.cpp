#include <iostream>


int main()
{
    int *a, *b; // two integers pointer on the stack
    a = new int;
    b = a;
    *b = 8;

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;
    
    b = new int;
    *b = 9;

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;

    return 0;
};