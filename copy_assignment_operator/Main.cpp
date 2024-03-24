/**
 * c++ copy assignment operator
 * - defines the behavior when an object is copied using assignment operator =
 * 
 * copy constructor vs. assignment
 * - a copy constructor "creates a new object"
 * - a assignment operator assigns a "value to an existing object" (is always called on an object that has already been constructed)
 * 
 * automatic assignment operator
 * - if an assignment operator is not provided, the c++ compiler provides an automatic assignment operator
 * - will copy the contents of all member variables
 * 
 * custom assignment operator
 * - is a public member function of the class
 * - has function name "operator="
 * - has return value of a reference of the class type
 * - the argument must be const reference of the class type
*/

#include <iostream>
#include "Cube.h"

int main()
{
    Cube a;
    Cube b(2);

    a = b;

    std::cout << "Volume: " << a.GetVolume() << "." << std::endl;
    std::cout << "Volume: " << b.GetVolume() << "." << std::endl;
    
    return 0;
};