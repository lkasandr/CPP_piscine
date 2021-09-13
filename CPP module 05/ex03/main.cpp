#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Form* form = NULL;

    form = intern.makeForm("presidential pardon", "pardon");
    if (form)
    {
        delete form;
        form = NULL;
    }
    form = intern.makeForm("robotomy request", "pardon");
    if (form)
    {
        delete form;
        form = NULL;
    }
    form = intern.makeForm("shrubbery creation", "pardon");
    if (form)
    {
        delete form;
        form = NULL;
    }

    try
    {
        form = intern.makeForm("tratata", "pardon");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
} 