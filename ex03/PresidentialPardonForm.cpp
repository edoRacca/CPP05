#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("ShrubberyForm", 25, 5)
{
	this->_target = target;
	std::cout << "SchrubberyForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "SchrubberyForm constructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (!this->getSigned())
		throw (GradeTooHighException(T_RED "Form is not signed" T_WHITE));
	else if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException(T_RED "Form execution grade is too high" T_WHITE));
	else
		std::cout << T_GREEN"\n" + this->_target + "\" has been pardoned by Zaphod Beeblebrox" T_WHITE << std::endl;
}