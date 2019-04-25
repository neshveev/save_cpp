#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( std::string target ):
					Form("RobotomyRequest", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs.getTarget();
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & rhs )
{
	*this = rhs;
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << "Fail robotomize." << std::endl;
	executor.executeForm(*this);
}
