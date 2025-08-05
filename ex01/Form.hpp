
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
	Form(const std::string name, bool sign, int signgrade, int execgrade): _name(name), _signed(sign), _signgrade(signgrade), _execgrade(execgrade)
	{
		std::cout << "Form constructor called" << std::endl;
	};
	Form(const Form& f): _name(f._name), _signed(f._signed), _signgrade(f._signgrade), _execgrade(f._execgrade)
	{
		std::cout << "Form copy constructor called" << std::endl;
	};
	~Form();

	Form& operator=(const Form& f);

	std::string getName();
	bool getSigned();
	int getSignGrade();
	int getExecGrade();

};

std::ostream& operator<<(std::ostream& os, const Form& f);


#endif