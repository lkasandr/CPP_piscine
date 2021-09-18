#include "Form.hpp"

Form::Form(void) : name("noname"), signeIndicator(0), gradeSign(1), gradeExecute(150)
{
}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) : 
name(name), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
    if (this->gradeSign < 1 || this->gradeExecute < 1)
        throw GradeTooHightException();
    if (this->gradeSign > 150 || this->gradeExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), gradeSign(form.gradeSign), gradeExecute(form.gradeExecute)
{

}

Form& Form::operator=(const Form &form)
{
    if (this == &form)
        return *this;
    this->signeIndicator = form.signeIndicator;
    return *this;
}

Form::~Form(void)
{

}

const std::string Form::getName(void) const
{
    return this->name;
}

bool Form::getIndicator(void) const
{
    return this->signeIndicator;
}

int Form::getGradeSign(void) const
{
    return this->gradeSign;
}

int Form::getGradeExecute(void) const
{
    return this->gradeExecute;
}

void Form::beSigned(Bureaucrat &man)
{
    if (man.getGrade() > this->gradeSign)
        throw GradeTooLowException();
    else if (this->signeIndicator == 1)
        throw IsSignedException();
    else
        this->signeIndicator = 1;
}

std::ostream& operator<< (std::ostream &out, const Form& b)
{
    out << "form's name: " << b.getName()
    << " signature indicator: " << b.getIndicator()
    << " grade to sign: " << b.getGradeSign()
    << " grade to execute: " << b.getGradeExecute() << std::endl;
    return out;
}

const char* Form::GradeTooHightException::what() const throw()
{
    return ("The grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("The grade is too low");
}

const char* Form::IsSignedException::what() const throw()
{
    return ("The form is already signed");
}

void Form::setIndicator(bool ind)
{
    this->signeIndicator = ind;
}

