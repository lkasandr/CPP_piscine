#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat one("One", 1);
    Bureaucrat two("Two", 150);
    Form forma("Forma", 50, 50);

    std::cout << one << std::endl;
    std::cout << two << std::endl;
    std::cout << forma << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "First test\n";
    try 
    {
        Form forma2("Forma2", 200, 200);
    }

    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };

    std::cout << "\n" << std::endl;

    std::cout << forma << std::endl;
    forma.beSigned(one);
    std::cout << forma << std::endl;
    one.signForm(forma);
    std::cout << forma << std::endl;
    two.signForm(forma);
    
    return 0;

} 