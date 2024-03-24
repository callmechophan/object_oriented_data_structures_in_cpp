/**
 * in c++, an instance of a variable can be stored directly in memory
 * - accessed by "pointer"
 * - or accessed by "reference"
 * 
 * storage by pointer
 * - modified with an asterisk "*"
 * 
 * storage by reference
 * - is an "alias" to another version
 * - does not store memory itself (this is the memory to another variable)
 * - the alias must be assigned when the variable is initialized
*/

#include <iostream>

int main() {
    int a = 4;
    int b = a; // direct
    int* c = &a; // pointer
    int& d = a; // reference

    // direct
    std::cout << "Value: a = " << a << ", b = " << b << "." << std::endl;
    std::cout << "Address: a = " << &a << ", b = " << &b << "." << std::endl;

    // pointer
    std::cout << "Value: a = " << a << ", c = " << *c << "." << std::endl;
    std::cout << "Address: a = " << &a << ", c = " << c << "." << std::endl;

    // reference
    std::cout << "Value: a = " << a << ", d = " << d << "." << std::endl;
    std::cout << "Address: a = " << &a << ", d = " << &d << "." << std::endl;

    return 0;
};
