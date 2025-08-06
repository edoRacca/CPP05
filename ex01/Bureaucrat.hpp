
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>
# include <string>

class Bureaucrat
{

private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& b);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& b);

	const std::string	getName(void) const;
	int 				getGrade(void) const;
	void 				incrementGrade();
	void				decrementGrade();

	class GradeTooHighException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooHighException(): _msg("Grade of bureaucrat can't be higher") {};
			const char* what() const throw() {return (this->_msg.c_str());};
			virtual ~GradeTooHighException() throw() {};
	};

	class GradeTooLowException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooLowException(): _msg("Grade of bureaucrat can't be lower") {};
			const char* what() const throw() {return (this->_msg.c_str());};
			virtual ~GradeTooLowException() throw() {};
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif