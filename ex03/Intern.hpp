#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"

class Intern
{

private:
	

public:
	Intern();
	Intern(const Intern &i);
	~Intern();

	Intern& operator=(const Intern& i);

	AForm* makeForm(std::string form, std::string target);
};


#endif