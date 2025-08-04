
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
	Bureaucrat(std::string name, int grade): _name(name), _grade(grade) 
	{std::cout << "Bureaucrat constructor called" << std::endl;};
	~Bureaucrat();

	std::string getName(void) const;
	int getGrade(void) const;

	class GradeTooHighException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooHighException(const std::string& msg): _msg("Grade of bureaucrat can't be higher") {};
			const char* what() const throw() {return (this->_msg.c_str());};
	};

	class GradeTooLowException: public std::exception
	{
		private:
			const std::string _msg;
		
		public:
			GradeTooLowException(const std::string& msg): _msg("Grade of bureaucrat can't be lower") {};
			const char* what() const throw() {return (this->_msg.c_str());};
	};
};



#endif