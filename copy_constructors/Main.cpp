/**
 * c++ copy constructor
 * - a copy constructor is a special constructor that exists to make a copy of existing object
 * 
 * automatic copy constructor
 * - if we do not provide copy constructors, the c++ provides an "automatic copy constructor"
 * - will copy the contents of all member variables
 * 
 * custom copy constructor
 * - a class constructor
 * - the argument must be const reference of the same type as the class
*/

#include <iostream>
#include "Cube.h"

int main()
{
    Cube a;
    Cube b(2);
    Cube d(b);

    std::cout << "Volume: " << b.GetVolume() << "." << std::endl;
    std::cout << "Volume: " << d.GetVolume() << "." << std::endl;
    
    return 0;
};