/**
 * generic to specialized
 * - a "base class" is a generic form of a specialized, "derived class"
 * 
 * initialization
 * - when a derived class is initialized, the derived class must construct the base class
 * - custom constructor can be used with an "initialization list"
 * 
 * access control (when a base class is inherited)
 * - the derived class: can access all "public" members of the base class
 * - the derived class: can "not" access "private" members of the base class
*/

#include <iostream>
#include "Cube.h"

int main()
{
    Cube c(4);
    std::cout << "Length: " << c.GetLength() << "." << std::endl;
    std::cout << "Volume: " << c.GetVolume() << "." << std::endl;

    return 0;
};