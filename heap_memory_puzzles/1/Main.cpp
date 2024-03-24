#include <iostream>

int main()
{
    int a = 2, b = 4, c = 8;
    int *d = &a, *e = &b, *f = &c;

    c = a;
    std::cout << a << " " << b << " " << c << " " << *d << " " << *e << " " << *f << " "  << std::endl;

    d = e;
    std::cout << a << " " << b << " " << c << " " << *d << " " << *e << " " << *f << " "  << std::endl;

    *e = *f;
    std::cout << a << " " << b << " " << c << " " << *d << " " << *e << " " << *f << " "  << std::endl;

    return 0;
};