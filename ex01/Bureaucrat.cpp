
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat& b): _name(b._name), _grade(b._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	this->_grade = b._grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw (GradeTooHighException());
		this->_grade -= 1;
	}
	catch(const GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw (GradeTooLowException());
		this->_grade += 1;
		
	}
	catch(const GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}