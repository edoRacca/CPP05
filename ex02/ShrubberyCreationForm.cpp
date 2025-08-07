
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyForm", 145, 137)
{
	this->_target = target;
	std::cout << "SchrubberyForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "SchrubberyForm constructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (!this->getSigned() || executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException());

}