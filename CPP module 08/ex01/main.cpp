#include "span.hpp"



int main()
{
    Span sp = Span(100000);
    sp.addNumber(1);
    sp.addNumber(50);
    sp.addNumber(30);
    sp.addNumber(25);
    sp.addNumber(12, 99995);
    try
    {
        sp.addNumber(1200);
        sp.addNumber(13);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp span.cpp span.hpp