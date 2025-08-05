
#include "Form.hpp"

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

std::string Form::getName()
{

}

bool Form::getSigned()
{

}

int Form::getSignGrade()
{

}

int Form::getExecGrade()
{

}
