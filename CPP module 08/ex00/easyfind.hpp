#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
int easyfind(T value, int number)
{
    typename T::iterator i;
    i = std::find(value.begin(), value.end(), number);
    if (i != value.end())
    {
        std::cout << "The number is found." << std::endl;
        return 0;
    }
    else
    {
        std::cout << "The number not found." << std::endl;
        return 1;
    }
};

#endif