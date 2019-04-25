#include "PresidentialPardonForm.hpp"
#include <string>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
					Form("PresidentialPardon", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	Form::operator=(rhs);
	this->_target = rhs.getTarget();
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & rhs )
{
	*this = rhs;
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	executor.executeForm(*this);
}
