/**
 * c++ variable has a type, name, value, and location in memory
 * 
 * c++ types
 * - primitive types: int, char, bool, float, double, void
 * - user-defined: std::string, std::vector
 * 
 * c++ programs
 * - starting point is a function "int main()"
*/

#include <iostream>

int main()
{
    int i = 4;
    i = i + 2;

    char c = 'a';

    std::cout << i << " " << c << std::endl;

    return 0;
};