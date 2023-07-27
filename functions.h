#ifndef _ARRAY_H_
#define _ARRAY_H_
#include <iostream>
#include <cstring>

class PointerFuncts
{
    public:
        PointerFuncts();

        ~PointerFuncts(void);

        int Add(int *a, int *b);

        void AddVal(int *a, int *b, int *result);

        void Swap(int *ptr1, int *ptr2);

        void Factorial(int *a, int *result);

    private:
        int valueA;
        int ValueB;
};

#endif