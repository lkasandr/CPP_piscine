#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{

	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat& operator=(const Bureaucrat &b);
		~Bureaucrat(void);
		const std::string getName() const;
		int getGrade() const;
		void GradeHigh(void);
		void GradeLow(void);
		void signForm(Form &form);

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

std::ostream& operator<< (std::ostream &out, const Bureaucrat& b);

#endif