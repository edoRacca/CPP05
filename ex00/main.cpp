
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat timmy("Timmy", 1);
	Bureaucrat billy("Billy", 150);
	Bureaucrat john("John", 12);
	Bureaucrat alfred("Alfred", 102);

	std::cout << std::endl << timmy << std::endl;
	timmy.incrementGrade();
	std::cout << timmy << std::endl << std::endl;

	std::cout << billy << std::endl;
	billy.decrementGrade();
	std::cout << billy << std::endl << std::endl;

	std::cout << alfred << std::endl;
	alfred.incrementGrade();
	std::cout << alfred << std::endl << std::endl;

	std::cout << john << std::endl;
	john.decrementGrade();
	std::cout << john << std::endl << std::endl;
}