#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Form* form;

    form = intern.makeForm("presidential pardon", "pardon");
    form = intern.makeForm("robotomy request", "pardon");
    form = intern.makeForm("shrubbery creation", "pardon");

    try
    {
        form = intern.makeForm("tratata", "pardon");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
} 