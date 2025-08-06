
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

	class GradeTooHighException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooHighException(): _msg("Grade of this form is too high for this Bureaucrat") {};
			const char* what() const throw() {return (this->_msg.c_str());};
			virtual ~GradeTooHighException() throw() {};
	};

	class GradeTooLowException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooLowException(): _msg("Grade of this form is too low for this Bureaucrat") {};
			const char* what() const throw() {return (this->_msg.c_str());};
			virtual ~GradeTooLowException() throw() {};
	};

};

std::ostream& operator<<(std::ostream& os, const Form& f);


#endif