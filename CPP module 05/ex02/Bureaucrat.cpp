#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("noname"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
    if (this->grade < 1)
        throw GradeTooHightException();
    if (this->grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    *this = b;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this == &b)
        return *this;
    this->grade = b.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void)
{

}

const std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat& b)
{
    out << b.getName() << " has a grade of " << b.getGrade();
    return out;
}

void Bureaucrat::GradeHigh(void)
{
    this->grade--;
    if (this->grade < 1)
        throw GradeTooHightException();
    if (this->grade > 150)
        throw GradeTooLowException();
    
}

void Bureaucrat::GradeLow(void)
{
    this->grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
    if (this->grade < 1)
        throw GradeTooHightException();
}

const char* Bureaucrat::GradeTooHightException::what() const throw()
{
    return ("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The grade is too low");
}

void Bureaucrat::signForm(Form &form)
{
    if (form.getIndicator() == 1)
    {
        std::cout << this->name << " signs " << form.getName() << std::endl;
    }
    else
        std::cout << this->name << " can't sign " << form.getName() 
        << " because it's lunch time" << std::endl;
}

void Bureaucrat::executeForm (Form const & form) const
{
    if ((form.getGradeExecute() >= this->getGrade()) && (form.getIndicator() == 1))
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    else if (form.getGradeExecute() < this->getGrade())
        std::cout << this->getName() << " can't executes " << form.getName() << " because he has a low grade" << std::endl;
    else if (form.getIndicator() == 0)
        std::cout << this->getName() << " can't executes " << form.getName() << " because form is not signed" << std::endl;
    
}