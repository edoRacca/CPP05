
#include "Form.hpp"

Form::Form(const std::string name, bool sign, int signgrade, int execgrade): _name(name), _signed(sign), _signgrade(signgrade), _execgrade(execgrade)
{
	std::cout << "Form constructor called" << std::endl;
};

Form::Form(const Form& f): _name(f._name), _signed(f._signed), _signgrade(f._signgrade), _execgrade(f._execgrade)
{
	std::cout << "Form copy constructor called" << std::endl;
};

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& f)
{
	if (this != &f)
		this->_signed = f._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->_signgrade);
}

int Form::getExecGrade() const
{
	return (this->_execgrade);
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form " << f.getName() << ", signed " << ((f.getSigned() == 1) ? "true" : "false") << ", grade to be signed is " \
	<< f.getSignGrade() << ", grade to be executed " << f.getExecGrade() << std::endl;
	return (os);
}