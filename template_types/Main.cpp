/**
 * template type
 * - is a special type that can take on different types when the type is initialized
 * 
 * std::vector
 * - provides the functionality of dynamically growing array with a templated type
 * 
 * template type
 * - the template type goes inside of "<>" at the end of type name
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    for (unsigned i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    };

    return 0;
};