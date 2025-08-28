
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
	if (!this->getSigned())
		throw (GradeTooHighException(T_RED "Form is not signed" T_WHITE));
	else if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException(T_RED "Form execution grade is too high" T_WHITE));
	else
	{
		std::ofstream file((this->_target + "_shrubbery").c_str());
		std::string buf = "        __ _.--..--._ _\n     .-' _/   _/\\_   \\_'-.\n    |__ /   _/\\__/\\_   \\__|\n       |___/\\_\\__/  \\___|\n              \\__/\n              \\__/\n               \\__/\n                \\__/\n             ____\\__/___\n       . - '             ' -.\n      /                      \\\n~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~\n  ~~~   ~~~~~   ~!~~   ~~ ~  ~ ~ ~pjb";
		file << buf;
		file.close();
		std::cout << T_GREEN"" + executor.getName() + " signed \"" + this->_target + "\"" T_WHITE << std::endl;
	}
}