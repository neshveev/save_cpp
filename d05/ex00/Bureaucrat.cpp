#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat( std::string const name, unsigned grade ): _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHightException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & rhs )
{
	*this = rhs;
}

Bureaucrat&	Bureaucrat::operator=( Bureaucrat const & rhs )
{
//	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

std::string const &	Bureaucrat::getName( void ) const
{
	return this->_name;
}

unsigned		Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void	Bureaucrat::increment( void )
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHightException());
}

void	Bureaucrat::decrement( void )
{
	this->_grade += 1;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream&	operator<<( std::ostream & out, Bureaucrat const & rhs )
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return out;
}
