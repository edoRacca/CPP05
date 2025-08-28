
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyForm", 72, 45)
{
	this->_target = target;
	std::cout << "SRobotomyForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyForm constructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (!this->getSigned())
		throw (GradeTooHighException(T_RED "Form is not signed" T_WHITE));
	else if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException(T_RED "Form execution grade is too high" T_WHITE));
	else
	{
		srand(time(0));
		std::cout << "trimp trum tramp ..." << std::endl;
		if (rand() % 100 < 50)
			std::cout << T_GREEN"\"" + this->_target + "\" has been robotomized successfully" T_WHITE << std::endl;
		else
			std::cout << T_RED"\"" + this->_target + "\" robotomization failed..." T_WHITE << std::endl;
	}
}
