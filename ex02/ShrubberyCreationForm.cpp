
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
		throw (GradeTooHighException("Form execution grade is too high"));
	else
	{
		std::string name = this->_target + "_shrubbery";
		std::ofstream file(name);
		std::string buf = "        __ _.--..--._ _\n     .-' _/   _/\\_   \\_'-.\n    |__ /   _/\\__/\\_   \\__|\n       |___/\\_\\__/  \\___|\n              \\__/\n              \\__/\n               \\__/\n                \\__/\n             ____\\__/___\n       . - '             ' -.\n      /                      \\\n~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~\n  ~~~   ~~~~~   ~!~~   ~~ ~  ~ ~ ~pjb";
		file << buf;
		file.close();
	}
}