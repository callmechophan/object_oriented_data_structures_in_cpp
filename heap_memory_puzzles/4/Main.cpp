#include <iostream>

int main()
{
    int *a;
    int size = 3;
    a = new int[size]; // allocating a sequence of integers

    for (int i = 0; i < size; i++)
    {
        a[i] = i + 3;
    };

    delete[] a;

    return 0;
};