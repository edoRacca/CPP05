
#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm: public AForm
{

private:
	std::string	_target;

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor);
};


#endif