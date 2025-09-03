
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>

Bureaucrat*	createBureaucrat(std::string name, int grade)
{
	try
	{
		Bureaucrat *b = new Bureaucrat(name, grade);
		std::cout << std::endl;
		return (b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}

void	sign(AForm& f, Bureaucrat& b)
{
	try
	{
		b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	exec(AForm& f, Bureaucrat& b)
{
	try
	{
		f.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* sh;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	sh = someRandomIntern.makeForm("ShrubberyCreationForm", "pippo");
	delete rrf;
	delete sh;
}