#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat one("One", 1);
    Bureaucrat two("Two", 150);

    std::cout << one << std::endl;
    std::cout << two << std::endl;

    std::cout << "First test\n";
    try 
    {
        Bureaucrat tri("Tri", 0);
    }

    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };


    std::cout << "Second test\n";
    try 
    {
        one.GradeLow();
        std::cout << one << std::endl;
    }
    
    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };
    return 0;
}