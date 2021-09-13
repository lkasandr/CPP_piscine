#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), target("noname")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this == &copy)
        return *this;
    Form::operator=(copy);
    this->target = copy.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
    std::string fileName;

    if ((Form::getGradeExecute() >= executor.getGrade()) && (this->getIndicator() == 1))
    {
        fileName = this->target + "_shrubbery";
        std::ofstream fileOut(fileName);
        fileOut << "_________________ ¶¶¶¶\n";
        fileOut << "________________ ¶¶¶¶¶¶¶¶\n";
        fileOut << "_______________ ¶¶¶¶\n";
        fileOut << "___¶¶¶¶¶¶¶¶¶__ ¶¶¶____¶¶¶\n";
        fileOut << "_ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n";
        fileOut << "¶¶¶¶¶ ______¶¶¶¶¶¶¶¶____¶¶¶¶¶\n";
        fileOut << "_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶\n";
        fileOut << "______ ¶¶¶¶__¶¶¶_¶¶¶¶¶¶¶¶¶\n";
        fileOut << "____ ¶¶¶¶___¶¶¶___¶¶¶_¶¶¶¶¶\n";
        fileOut << "___ ¶¶¶¶¶__¶¶¶¶_¶¶_¶¶¶_¶¶¶¶¶\n";
        fileOut << "___ ¶¶¶___¶¶¶¶¶_¶¶__¶¶¶__¶¶¶\n";
        fileOut << "__ ¶¶____¶¶¶¶¶___¶¶_¶¶¶¶_¶¶¶\n";
        fileOut << "________ ¶¶¶_____¶¶___¶¶__¶\n";
        fileOut << "_________ ¶¶¶____¶¶¶__¶¶__¶\n";
        fileOut << "_________ ¶¶¶_____¶¶___¶\n";
        fileOut << "_________ ¶¶______¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "_________________ ¶¶¶\n";
        fileOut << "________________ ¶¶¶¶\n";
        fileOut << "________________ ¶¶¶¶\n";
        fileOut << "________________ ¶¶¶¶\n";
        fileOut << "________________ ¶¶¶\n";
        fileOut << "_______________¶¶¶_¶¶¶\n";
        fileOut << "______________ ¶¶¶¶¶¶¶¶\n";
        fileOut.close();
        executor.executeForm(*this);
    }
    else
    {
        executor.executeForm(*this);
        throw GradeTooLowException();
    }
}