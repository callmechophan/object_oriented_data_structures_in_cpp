#pragma once

class Pair {
    public:
        int* pa;
        int* pb;
        Pair(int, int);
        Pair(const Pair& p);
        ~Pair();
};