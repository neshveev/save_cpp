#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

class ShrubberryCreationForm : public Form
{
	std::string	_target;
protected:
	ShrubberryCreationForm( void ) {}
public:
	ShrubberryCreationForm( ShrubberryCreationForm const & rhs );
	~ShrubberryCreationForm( void ) {}
	ShrubberryCreationForm&	operator=( ShrubberryCreationForm const & rhs );

	ShrubberryCreationForm( std::string target );

	std::string	getTarget( void ) const;

	void	execute( Bureaucrat const & executor ) const;
};

#endif
