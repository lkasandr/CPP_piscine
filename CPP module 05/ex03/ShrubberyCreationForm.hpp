#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm(void);
        void execute (Bureaucrat const & executor) const;
};

#endif