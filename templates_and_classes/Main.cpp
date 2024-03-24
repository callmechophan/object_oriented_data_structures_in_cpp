/**
 * templated functions
 * - a template variable is defined by declaring it before the beginning of a class or function
*/

#include <iostream>

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
};

int main()
{
    std::cout << "Max: " << max(3, 5) << "." << std::endl;
    std::cout << "Max: " << max('a', 'd') << "." << std::endl;

    return 0;
};