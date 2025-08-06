
#include "Bureaucrat.hpp"

Bureaucrat*	createBureaucrat(std::string name, int grade)
{
	try
	{
		Bureaucrat *b = new Bureaucrat(name, grade);
		return (b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}

void	print_increment_bureaucrat(Bureaucrat *b)
{
	if (b)
	{
		std::cout << *b << std::endl;
		try
		{
			b->incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << *b << std::endl;
		delete b;
		std::cout << std::endl;
	}
}

void	print_decrement_bureaucrat(Bureaucrat *b)
{
	if (b)
	{
		std::cout << *b << std::endl;
		try
		{
			b->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << *b << std::endl;
		delete b;
		std::cout << std::endl;
	}
}

int main(void)
{
	
	Bureaucrat* timmy = createBureaucrat("Timmy", 1);
	print_increment_bureaucrat(timmy);
	
	Bureaucrat* john = createBureaucrat("John", 150);
	print_decrement_bureaucrat(john);

	Bureaucrat* alfred = createBureaucrat("Alfred", 0);
	print_increment_bureaucrat(alfred);

	Bureaucrat* gerry = createBureaucrat("Gerry", 151);
	print_decrement_bureaucrat(gerry);

	Bureaucrat* Hugo = createBureaucrat("Hugo", 12);
	print_increment_bureaucrat(Hugo);

	Bureaucrat* pippo = createBureaucrat("Pippo", 65);
	print_decrement_bureaucrat(pippo);

}