
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	std::cout << "Form signed: " << (f.getSigned() == true ? "true" : "false") << std::endl;
	try
	{
		b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Form signed: " << (f.getSigned() == true ? "true" : "false") << std::endl << std::endl;
}

int main(void)
{
	ShrubberyCreationForm a("Ginepro");
	Bureaucrat tom("Tom", 12);

	a.execute(tom);
}