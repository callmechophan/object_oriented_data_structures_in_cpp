/**
 * when an instance of a class is cleaned up, the class destructor is the last call
 * 
 * automatic default destructor
 * - if we do not provide custom destructor, the c++ provides an "automatic default destructor"
 * - should never call directly, it is automatically called
 *  + "stack": when the function "return"
 *  + "heap": when "delete" is used
 * 
 * custom destructor
 * - a member function with the same name of the class, add a tilde "~"
 * - all destructors have 0 arguments and no return type
 * 
*/

#include <iostream>
#include "Cube.h"

double CubeOnStack()
{
    Cube a(3);
    return a.GetVolume();
};

void CubeOnHeap()
{
    Cube* b = new Cube(10);
    delete b;
};

int main()
{
    CubeOnStack();
    CubeOnHeap();
    
    return 0;
};