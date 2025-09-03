
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &i)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)i;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern &i)
{
	if (this == &i)
		return (*this);
	return (*this);
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	std::string	formList[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int			i = 0;

	while (i < 3 && formList[i] != form)
		i++;
	if (i != 3)
		std::cout << "Intern creates \"" << form << "\"" << std::endl;
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Intern can't create \"" << form << "\"" << std::endl;
			return (NULL);
	}
}
