#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern &copy)
{
    if (this == &copy)
        return *this;
    *this = copy;
    return *this;
}

Intern::~Intern()
{

}

const char* Intern::InternException::what() const throw()
{
    return ("Unknown form");
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form* fnctPtr = NULL;
    int flag = 0;

    ((name == "presidential pardon") && (fnctPtr = new PresidentialPardonForm(target)) && (flag = 1));
    ((name == "robotomy request") && (fnctPtr = new RobotomyRequestForm(target)) && (flag = 1));
    ((name == "shrubbery creation") && (fnctPtr = new ShrubberyCreationForm(target)) && (flag = 1));
    
    switch (flag)
    {
    case (1):
        std::cout << "Intern created " << fnctPtr->getName() << std::endl;
        return fnctPtr;
    default:
        throw Intern::InternException();
    }
}