
#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	const std::string _name;
	bool _signed;
	const int _signgrade;
	const int _execgrade;

public:
	Form(const std::string name, int signgrade, int execgrade);
	Form(const Form& f);
	~Form();

	Form& operator=(const Form& f);

	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	void		beSigned(const Bureaucrat& b);

	class GradeTooHighException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooHighException(std::string msg): _msg(msg) {};
			const char* what() const throw() {return (this->_msg.c_str());};
			virtual ~GradeTooHighException() throw() {};
	};

	class GradeTooLowException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooLowException(std::string msg): _msg(msg) {};
			const char* what() const throw() {return (this->_msg.c_str());};
			virtual ~GradeTooLowException() throw() {};
	};

};

std::ostream& operator<<(std::ostream& os, const Form& f);


#endif