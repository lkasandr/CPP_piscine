#include "easyfind.hpp"

int main()
{
    int i = 0;
    std::vector<int> array;
    
    while (i < 20)
    {
        array.push_back(i);
        i++;
    }
    easyfind(array, 1);
    easyfind(array, 15);
    easyfind(array, 35);

    return 0;
}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp easyfind.hpp