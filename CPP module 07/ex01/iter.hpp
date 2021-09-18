#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int lenght,  void(*fn)(T const &))
{
    int i = 0;
    if (!array || lenght == 0)
        return ;
    while(i < lenght)
    {
        (*fn)(array[i]);
        i++;
    }
}

#endif