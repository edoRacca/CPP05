
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

class Bureaucrat
{

private:
	const std::string	_name;
	int					grade;

public:
	Bureaucrat(/* args */);
	~Bureaucrat();
};



#endif