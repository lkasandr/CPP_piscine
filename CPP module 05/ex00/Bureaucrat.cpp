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
    if (this->grade == 1)
        throw GradeTooHightException();
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