/**
 * heap memory
 * - if needs to exist for longer than, we must use "heap memory"
 * - create the heap memory in c++ is with the "new" operator
 * 
 * c++ "new" operator
 * - allocate memory on the heap
 * - initialize
 * - return a pointer
 * - the pointer is passed to the "delete" operator
*/

#include <iostream>

int main()
{
    // memory to store an integer pointer on the stack
    // memory to store an integer on the heap
    int *pointer_number = new int;

    std::cout << "Value: " << *pointer_number << "." << std::endl; // 0 (or random large value)
    std::cout << "Address: " << pointer_number << "." << std::endl; // heap memory address
    std::cout << "Address: " << &pointer_number << "." << std::endl; // stack memory address

    *pointer_number = 10;
    std::cout << "Value: " << *pointer_number << "." << std::endl;
    std::cout << "Address: " << pointer_number << "." << std::endl;
    std::cout << "Address: " << &pointer_number << "." << std::endl;

    // deallocate memory
    delete pointer_number;

    std::cout << "Value: " << *pointer_number << "." << std::endl;
    std::cout << "Address: " << pointer_number << "." << std::endl;
    std::cout << "Address: " << &pointer_number << "." << std::endl;

    return 0;
};