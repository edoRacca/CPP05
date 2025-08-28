
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
	Bureaucrat tom("Tom", 15);
	// exec(a, tom);
	// std::cout << std::endl << a << std::endl;

	// sign(a, tom);
	// std::cout << std::endl << a << std::endl;
	// exec(a, tom);
}