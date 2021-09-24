#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
void easyfind(T value, int number)
{
    typename T::iterator i;
    i = std::find(value.begin(), value.end(), number);
    if (i != value.end())
        std::cout << "The number is found." << std::endl;
    else
    {
        std::cout << "The number not found." << std::endl;
        throw std::exception();
    }
};

#endif