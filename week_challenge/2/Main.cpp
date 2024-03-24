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

Pair *pair()
{
    Pair *p = new Pair();

    return p;
}

int main()
{
    Pair *p;
    p = pair();

    if (p->a + p->b == p->sum())
    {
        std::cout << "Success!" << std::endl;
    }

    delete p; // deallocating the heap memory

    return 0;
};