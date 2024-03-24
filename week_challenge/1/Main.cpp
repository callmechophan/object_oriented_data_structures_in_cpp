#include <iostream>

class Pair
{
    public:
        int a;
        int b;
        int sum()
        {
            return a + b;
        };
};


int main()
{
    Pair p;
    p.a = 100;
    p.b = 200;

    if (p.a + p.b == p.sum())
    {
        std::cout << "Success!" << std::endl;
    };

    return 0;
};