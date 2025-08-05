
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{

private:
	const std::string _name;
	bool _signed;
	const int _signgrade;
	const int _execgrade;

public:
	Form(const std::string name, bool sign, int signgrade, int execgrade);
	Form(const Form& f);
	~Form();

	Form& operator=(const Form& f);

	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

};

std::ostream& operator<<(std::ostream& os, const Form& f);


#endif