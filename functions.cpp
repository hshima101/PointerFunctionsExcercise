#include <iostream>
#include <cstring>
#include "functions.h"

/*
Pointer Review
** a variable needs to be initialized first
** & points to the address of a variable
** * initializes the type of pointer variable
**  EXAMPLE
**  int a = 10
**  &a - points to variable address
**  int* ptr - initializes pointer
**  ptr = &a -- points to the value of a
**  READ: Void Pointers
*/

PointerFuncts::PointerFuncts()
{
    int a = 10;
    int b = 5;
    int result;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &result;

    //add the values of two pointers
    Add(ptr1, ptr2);

    //add the values of two pointers and return a value
    AddVal(ptr1, ptr2, ptr3);

    //swap pointer values
    Swap(ptr1, ptr2);

    //factorial
    Factorial(ptr1, ptr3);

};

PointerFuncts::~PointerFuncts(void)
{};

int PointerFuncts::Add(int *a, int *b)
{
    int numb1 = *a;
    int numb2 = *b;
    int result = numb1 + numb2;
    std::cout<< result <<std::endl;
    return result;
};

void PointerFuncts::AddVal(int *a, int *b, int *result)
{
    int numb1 = *a;
    int numb2 = *b;
    *result = numb1 + numb2;
};


void PointerFuncts::Swap(int *ptr1, int *ptr2)
{
    std::cout<< *ptr1 <<" "<< *ptr2 <<std::endl;

    if(*ptr1 > *ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    std::cout<< *ptr1 << " " << *ptr2 <<std::endl;
};


/*
void PointerFuncts::Factorial(int *a, int *result)
{
    //calculate the factorial and return the result
    //input the values in value *a in an array
    //get the size of the array and use it in the next
    //forloop to calculate the factorial
    int value = *a;
    int array[value];
    int arrayLength;
    int factorialRun = value;
    int value1 = 0;
    int value2 = 0;
    std::cout<<"inputing factorial values"<<std::endl;
    for(int i = 0; i < factorialRun; i++)
    {
        array[i] = value;
        value = value - 1;
        std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl;

    //collect the array length
    std::cout<<"collecting array length"<<std::endl;
    for(auto i: array)
    {
        std::cout<<arrayLength<<" ";
        arrayLength++;
    }
    std::cout<<std::endl;

    //calculating factorial
    //NEEDS WORK
    std::cout<<"calculating factorial value"<<std::endl;
    for(int i = 0; i < arrayLength; i++)
    {
        value1 = array[i] * array[i+1];
        value2 = value2 + value1;
    }
    std::cout<<value2<<std::endl;
    
};
*/

void PointerFuncts::Factorial(int *a, int * result)
{
    int value = *a;
    int answer = *result;
    int arrayLength = 1;
    std::cout<<"Value:"<<value<<std::endl;
    std::cout<<"arrayLength:"<<arrayLength<<std::endl;

    for(int i = 1; i <= value; i++)
    {
        arrayLength *= i;
        std::cout<<arrayLength<<std::endl;
    }

    *result = arrayLength;
    std::cout<<"Factorial Result: "<<arrayLength<<std::endl;
};