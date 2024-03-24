/**
 * c++ encapsulation encloses data and function into a single unit (call a "class")
 * 
 * c++ encapsulation #1
 * - "public" and "private"
 * 
 * c++ encapsulation #2
 * - "interface" (.h file) and "implementation" (.cpp file)
 * 
 * c++ header file (.h) defines the interface to the class
 * - declaration of all member variables
 * - declaration of all member functions
 * 
 * c++ implementation file (.cpp) contains the code to implement the class (or other c++ code)
*/

#include <iostream>
#include "Cube.h"

int main()
{
    Cube cube;

    cube.SetLength(2);
    double volume = cube.GetVolume();

    std::cout << "Volume: " << volume << "." << std::endl;

    return 0;
};