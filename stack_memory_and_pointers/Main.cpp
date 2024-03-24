/**
 * memory address
 * - the "&" operator returns the memory address of a variable
 * 
 * stack memory
 * - variable in c++ is placed in "stack memory" (default)
 * - start from high address & grows down
 * 
 * pointer
 * - is a variable that stores the memory address of the data (indirection)
*/

#include <iostream>

int main()
{
    int number = 4;

    std::cout << "Value: " << number << "." << std::endl;
    std::cout << "Address: " << &number << "." << std::endl;

    // pointer
    int *pointer_number = &number;
    std::cout << "Value: " << *pointer_number << "." << std::endl;
    std::cout << "Address: " << pointer_number << "." << std::endl;
    std::cout << "Address: " << &pointer_number << "." << std::endl;

    // interact with "number" through "pointer_number"
    *pointer_number = 10;
    std::cout << "Value: " <<  number << "." << std::endl;
    std::cout << "Value: " <<  *pointer_number << "." << std::endl;

    return 0;
};