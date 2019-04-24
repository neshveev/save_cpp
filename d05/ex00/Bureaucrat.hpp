#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	std::string const	_name;
	unsigned		_grade;

protected:
	Bureaucrat( void ) {}

public:
	Bureaucrat( std::string const name, unsigned grade );
	Bureaucrat( Bureaucrat const & rhs );
	Bureaucrat&	operator=( Bureaucrat const & rhs );
	~Bureaucrat( void ) {}

	std::string const & 	getName( void ) const;
	unsigned		getGrade( void ) const;

	void		increment( void );
	void		decrement( void );


class GradeTooHightException : public std::exception
{
public:
	GradeTooHightException( void ) throw() {}
	GradeTooHightException( GradeTooHightException const & rhs ) throw() : std::exception(rhs){}
	GradeTooHightException&	operator=( GradeTooHightException const & rhs ) throw() {return *this;}
	~GradeTooHightException( void ) throw() {}
	const char *	what( void ) const throw() {return "Grade too hight";}
};

class GradeTooLowException : public std::exception
{
public:
	GradeTooLowException( void ) throw() {}
	GradeTooLowException( GradeTooLowException const & rhs ) throw() : std::exception(rhs){}
	GradeTooLowException&	operator=( GradeTooLowException const & rhs ) throw() {return *this;}
	~GradeTooLowException( void ) throw() {}
	const char *	what( void ) const throw() {return "Grade too low";}
};

};

std::ostream&	operator<<( std::ostream & out, Bureaucrat const & rhs );

#endif
