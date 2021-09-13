#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), target("noname")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this == &copy)
        return *this;
    Form::operator=(copy);
    this->target = copy.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
    int index;
    
    if ((Form::getGradeExecute() >= executor.getGrade()) && (this->getIndicator() == 1))
    {
        std::cout << "Makes some drilling noises." << std::endl;
        srand(time(0));
        index = rand() % 2;
        if (index == 0)
            std::cout << this->target << " has been robotomized successfully." << std::endl;
        else
            std::cout << "it’s a failure." << std::endl;
        executor.executeForm(*this);
    }
    else
    {
        executor.executeForm(*this);
        throw GradeTooLowException();
    }
}