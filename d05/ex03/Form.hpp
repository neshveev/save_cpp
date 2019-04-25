#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
	std::string const	_name;
	bool			_sign;
	unsigned const		_gradeSign;
	unsigned const		_gradeEx;
protected:
	Form( void );
public:
	Form( std::string name, unsigned gs, unsigned ge );
	Form( Form const & rhs );
	virtual	~Form( void );
	Form&	operator=( Form const & rhs );

	std::string const &	getName( void ) const;
	bool			getSign( void ) const;
	unsigned		getGradeSign( void ) const;
	unsigned		getGradeExecute( void ) const;

	void			beSigned( Bureaucrat const & rhs );

	virtual void		execute( Bureaucrat const & executor ) const = 0;

class GradeTooHightException : public std::exception
{
public:
	GradeTooHightException( void ) throw() {}
	GradeTooHightException( GradeTooHightException const & rhs ) throw() : std::exception(rhs){}
	GradeTooHightException&	operator=( GradeTooHightException const & rhs ) throw() {return *this;}
	~GradeTooHightException( void ) throw() {}
	const char *	what( void ) const throw() {return "Form::GradeTooHightException";}
};

class GradeTooLowException : public std::exception
{
public:
	GradeTooLowException( void ) throw() {}
	GradeTooLowException( GradeTooLowException const & rhs ) throw() : std::exception(rhs){}
	GradeTooLowException&	operator=( GradeTooLowException const & rhs ) throw() {return *this;}
	~GradeTooLowException( void ) throw() {}
	const char *	what( void ) const throw() {return "Form::GradeTooLowException";}
};

class NoSign : public std::exception
{
public:
	NoSign( void ) throw() {}
	NoSign( NoSign const & rhs ) throw() : std::exception(rhs){}
	NoSign&	operator=( NoSign const & rhs ) throw() {return *this;}
	~NoSign( void ) throw() {}
	const char *	what( void ) const throw() {return "Form::NoSign";}
};

};

std::ostream&	operator<<( std::ostream & out, Form const & rhs );

#endif
