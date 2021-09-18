#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat one("One", 1);
    Bureaucrat two("Two", 55);
    Bureaucrat three("Three", 20);
    Form forma("Forma", 50, 50);

    std::cout << one << std::endl;
    std::cout << two << std::endl;
    std::cout << forma << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "test 1\n";
    try 
    {
        Form forma2("Forma2", 200, 200);
    }

    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };

    std::cout << "test 2\n";
    forma.beSigned(one);
    std::cout << "test 3\n";
    try 
    {
        forma.beSigned(two);
    }

    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };


    std::cout << "test 4\n";

    try 
    {
        forma.beSigned(three);
    }

    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };
    return 0;

} 