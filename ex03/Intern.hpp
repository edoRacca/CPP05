#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"

class Intern
{

private:
	

public:
	Intern(/* args */);
	~Intern();

	AForm* makeForm(std::string form, std::string target);
};


#endif