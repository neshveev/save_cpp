#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
	std::string	_target;
protected:
	RobotomyRequestForm( void ) {}
public:
	RobotomyRequestForm( RobotomyRequestForm const & rhs );
	~RobotomyRequestForm( void ) {}
	RobotomyRequestForm&	operator=( RobotomyRequestForm const & rhs );

	RobotomyRequestForm( std::string target );

	std::string	getTarget( void ) const;

	void	execute( Bureaucrat const & executor ) const;
};

#endif
