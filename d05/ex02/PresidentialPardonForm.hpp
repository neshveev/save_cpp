#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
	std::string	_target;
protected:
	PresidentialPardonForm( void ) {}
public:
	PresidentialPardonForm( PresidentialPardonForm const & rhs );
	~PresidentialPardonForm( void ) {}
	PresidentialPardonForm&	operator=( PresidentialPardonForm const & rhs );

	PresidentialPardonForm( std::string target );

	std::string	getTarget( void ) const;

	void	execute( Bureaucrat const & executor ) const;
};

#endif
