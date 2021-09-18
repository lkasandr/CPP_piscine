#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat one("One", 1);
    Bureaucrat two("Two", 30);
    Bureaucrat three("Three", 150);

    ShrubberyCreationForm formaOne("Palma");
    RobotomyRequestForm formaTwo("Robot");
    PresidentialPardonForm formaThree("Prisoner");


    std::cout << "Bureaucrat One\n";
    formaOne.beSigned(one);
    formaOne.execute(one);
    std::cout << "\n";


    std::cout << "Bureaucrat Three\n";
    try
    {
        formaOne.beSigned(three);
    }
    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };
    try
    {
        formaOne.execute(three);
    }
    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };
    std::cout << "\n";
    
    std::cout << "Bureaucrat Two\n";
    formaTwo.beSigned(two);
    formaTwo.execute(two);
    std::cout << "\n";

    std::cout << "Bureaucrat Three\n";
    try
    {
        formaTwo.execute(three);
    }
    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };
    std::cout << "\n";

    std::cout << "Bureaucrat One\n";
    formaThree.beSigned(one);
    formaThree.execute(one);
    std::cout << "\n";

    std::cout << "Bureaucrat Three\n";
    try
    {
        formaThree.execute(three);
    }
    catch(const std::exception &exception) 
    {
        std::cerr << exception.what() << std::endl;
    };
    return 0;
} 