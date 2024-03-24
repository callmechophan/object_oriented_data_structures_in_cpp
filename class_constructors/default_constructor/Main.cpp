/**
 * automatic default constructor
 * - if we do not provide custom constructors, the c++ provides an "automatic default constructor"
 * 
 * custom default constructor
 * - a member function with the same name of the class
 * - the function take 0 parameters
 * - the function does not have return type
*/

#include <iostream>
#include "Cube.h"

int main()
{
    Cube cube;

    std::cout << "Volume: " << cube.GetVolume() << "." << std::endl;
    
    return 0;
};