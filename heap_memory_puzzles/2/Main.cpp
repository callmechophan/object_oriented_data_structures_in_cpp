#include <iostream>

int main()
{
    // an integer pointer on the stack
    // an integer on the heap
    int *a = new int;
    int &b = *a; // reference variable
    b = 4;

    std::cout << "Value: " <<  *a << "." << std::endl;
    std::cout << "Address: " << a << "." << std::endl; // on the heap
    std::cout << "Address: " << &a << "." << std::endl; // on the stack

    std::cout << "Value: " <<  b << "." << std::endl;
    std::cout << "Address: " << &b << "." << std::endl;

    return 0;
};