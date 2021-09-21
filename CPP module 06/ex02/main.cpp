#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base * generate (void)
{
    int index;
    Base* base;

    srand(time(0));
    index = rand() % 3;
    switch (index)
    {
    case 0:
        base = new A();
        break;
    case 1:
        base = new B();
        break;
    case 2:
        base = new C();
        break;    
    default:
        base = NULL;
        break;
    }
    return base;
}

void identify (Base * p)
{
    std::cout << "identify (Base * p)" << std::endl;
    if (dynamic_cast < A* > (p))
        std::cout << "A";
    if (dynamic_cast < B* > (p))
        std::cout << "B";
    if (dynamic_cast < C* > (p))
        std::cout << "C";
    std::cout << "\n";
}

void identify(Base& p)
{
    std::cout << "identify(Base& p)" << std::endl;
    try
    {
        p = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }

    try
    {
        p = dynamic_cast < B& > (p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
    
    try
    {
        p = dynamic_cast < C& > (p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
    }
}

int main()
{
    Base *base = NULL;

	base = generate();
	identify(base);
	identify(*base);
	if (base)
		delete base;
    base = NULL;

    return 0;
}