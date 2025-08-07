
#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void	sign(Form& f, Bureaucrat& b)
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
	Form f1("Macchina", 12, 12);
	Form f2("Struzzo", 1, 1);

	Bureaucrat* timmy = createBureaucrat("Timmy", 9);
	
	sign(f1, *timmy);
	sign(f2, *timmy);

	delete timmy;
	
}