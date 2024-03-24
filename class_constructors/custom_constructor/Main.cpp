/**
 * custom constructor
 * - non-default constructors
*/

#include <iostream>
#include "Cube.h"

int main()
{
    Cube cube(2);

    std::cout << "Volume: " << cube.GetVolume() << "." << std::endl;
    
    return 0;
};