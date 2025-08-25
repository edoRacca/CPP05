
#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

# define T_RED "\033[31m"
# define T_GREEN "\033[32m"
# define T_YELLOW "\033[33m"
# define T_BLUE "\033[34m"
# define T_WHITE "\033[0m"

class Bureaucrat;

class AForm
{

private:
	const std::string _name;
	bool _signed;
	const int _signgrade;
	const int _execgrade;

public:
	AForm(const std::string name, int signgrade, int execgrade);
	AForm(const AForm& f);
	virtual ~AForm() = 0;

	AForm& operator=(const AForm& f);

	std::string	 getName() const;
	bool		 getSigned() const;
	int			 getSignGrade() const;
	int			 getExecGrade() const;

	void		 beSigned(const Bureaucrat& b);
	virtual void execute(Bureaucrat const & executor) = 0;

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

std::ostream& operator<<(std::ostream& os, const AForm& f);


#endif