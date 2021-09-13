#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool signeIndicator;
        const int gradeSign;
        const int gradeExecute;
    
    public:
        Form(void);
        Form(const std::string name, const int gradeSign, const int gradeExecute);
        Form(const Form &form);
        Form &operator=(const Form &form);
        virtual ~Form(void);
        const std::string getName(void) const;
        bool getIndicator(void) const;
        int getGradeSign(void) const;
        int getGradeExecute(void) const;
        void beSigned(Bureaucrat &man);
        void setIndicator(bool ind);
        virtual void execute (Bureaucrat const & executor) const = 0;

        class GradeTooHightException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

};

std::ostream& operator<< (std::ostream &out, const Form& b);

#endif