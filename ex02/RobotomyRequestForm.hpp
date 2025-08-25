#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "AForm.hpp"

class AForm;

class RobotomyRequestForm: public AForm
{

private:
	std::string	_target;

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor);
};


#endif