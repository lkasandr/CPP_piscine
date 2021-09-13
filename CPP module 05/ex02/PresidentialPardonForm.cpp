#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), target("noname")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this == &copy)
        return *this;
    Form::operator=(copy);
    this->target = copy.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
    if ((Form::getGradeExecute() >= executor.getGrade()) && (this->getIndicator() == 1))
    {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
        executor.executeForm(*this);
    }
    else
    {
        executor.executeForm(*this);
        throw GradeTooLowException();
    }
}