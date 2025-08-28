
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
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
	ShrubberyCreationForm a("Ginepro");
	RobotomyRequestForm b("Dalvetro");
	Bureaucrat tom("Tom", 15);

	sign(a, tom);
	exec(a, tom);

	sign(b, tom);
	exec(b, tom);
	// std::cout << std::endl << a << std::endl;

	// std::cout << std::endl << a << std::endl;
	// exec(a, tom);
}