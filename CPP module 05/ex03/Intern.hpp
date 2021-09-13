#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        Intern& operator=(const Intern &copy);
        ~Intern();
        Form* makeForm(std::string name, std::string target);

    class InternException : public std::exception
    {
        public:
            const char* what() const throw();
    };
};

#endif