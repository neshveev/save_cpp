#include "ShrubberryCreationForm.hpp"
#include <string>
#include <fstream>

ShrubberryCreationForm::ShrubberryCreationForm( std::string target ):
					Form("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}

ShrubberryCreationForm&	ShrubberryCreationForm::operator=( ShrubberryCreationForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs.getTarget();
	return *this;
}

ShrubberryCreationForm::ShrubberryCreationForm( ShrubberryCreationForm const & rhs )
{
	*this = rhs;
}

std::string	ShrubberryCreationForm::getTarget( void ) const
{
	return this->_target;
}

void	ShrubberryCreationForm::execute( Bureaucrat const & executor ) const
{
	std::ofstream	out;
	std::string	name;

	Form::execute(executor);
	name = this->_target + "_shrubberry";
	out.open(name.data());
	out << "       ####        \n     ###0#####      \n   ##########0###   \n      0###0###	    \n      ###0###       \n        ##          \n        ##          \n        ##"
		<< std::endl;
	out.close();
	executor.executeForm(*this);
}
