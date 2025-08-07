
#include "AForm.hpp"

AForm::AForm(const std::string name, int signgrade, int execgrade): _name(name), _signed(false), _signgrade(signgrade), _execgrade(execgrade)
{
	if (signgrade > 150 || execgrade > 150)
		throw (GradeTooHighException("This form grade is too low"));
	else if (signgrade < 1 || execgrade < 1)
		throw (GradeTooLowException("This form grade is too high"));
	std::cout << "Form constructor called" << std::endl;
};

AForm::AForm(const AForm& f): _name(f._name), _signed(f._signed), _signgrade(f._signgrade), _execgrade(f._execgrade)
{
	std::cout << "Form copy constructor called" << std::endl;
};

AForm& AForm::operator=(const AForm& f)
{
	if (this != &f)
		this->_signed = f._signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getSignGrade() const
{
	return (this->_signgrade);
}

int AForm::getExecGrade() const
{
	return (this->_execgrade);
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (this->_signgrade < b.getGrade())
		throw (GradeTooLowException(b.getName() + " couldn't sign \"" + this->_name + "\" because form grade is too high"));
	this->_signed = true;
	std::cout << b.getName() + " signed \"" + this->_name + "\"" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << "Form " << f.getName() << ", signed " << ((f.getSigned() == 1) ? "true" : "false") << ", grade to be signed is " \
	<< f.getSignGrade() << ", grade to be executed " << f.getExecGrade() << std::endl;
	return (os);
}