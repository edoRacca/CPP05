#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "AForm.hpp"

class AForm;

class PresidentialPardonForm: public AForm
{

private:
	std::string	_target;

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor);
};


#endif