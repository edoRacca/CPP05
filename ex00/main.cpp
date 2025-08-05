
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat timmy("Timmy", 1);
	Bureaucrat billy("Billy", 150);
	Bureaucrat john("John", 12);
	Bureaucrat alfred("Alfred", 102);

	timmy.incrementGrade();
	billy.decrementGrade();
	alfred.incrementGrade();
	john.decrementGrade();
}