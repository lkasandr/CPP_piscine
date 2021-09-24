#include "easyfind.hpp"
#include <list>

int main()
{
    int i = 0;
    std::cout << "____VECTOR____" << std::endl;
    std::vector<int> vector;

    while (i < 20)
    {
        vector.push_back(i);
        i++;
    }
    try
    {
        easyfind(vector, 1);
        easyfind(vector, 15);
        easyfind(vector, 35);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    std::cout << "____LIST____" << std::endl;
    std::list<int> _list;
    i = 0;
    while (i < 10)
    {
        _list.push_back(i);
        i++;
    }
    try
    {
        easyfind(_list, 1);
        easyfind(_list, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    return 0;
}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp easyfind.hpp