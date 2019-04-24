#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form( void ): _gradeSign(150), _gradeEx(150)
{
}

Form::~Form( void ) {}

Form::Form( Form const & rhs ): _name( rhs.getName()), _gradeSign(rhs.getGradeSign()), _gradeEx(rhs.getGradeExecute())
{
//	this->_name = rhs.getName();
	this->_sign = rhs.getSign();
//	this->_gradeSign = rhs.getGradeSign();
//	this->_gradeEx = rhs.getGradeExecute();
}

Form&	Form::operator=( Form const & rhs )
{
	this->_sign = rhs.getSign();
	return *this;
}

Form::Form(  std::string name, unsigned gs, unsigned ge ): _name(name), _gradeSign(gs), _gradeEx(ge)
{
	if (gs < 1 || ge < 1)
		throw (GradeTooHightException());
	else if (gs > 150 || ge > 150)
		throw (GradeTooLowException());
}

std::string const &	Form::getName( void ) const
{
	return this->_name;
}

bool			Form::getSign( void ) const
{
	return this->_sign;
}

unsigned		Form::getGradeSign( void ) const
{
	return this->_gradeSign;
}

unsigned		Form::getGradeExecute( void ) const
{
	return this->_gradeEx;
}

std::ostream&	operator<<( std::ostream & out, Form const & rhs )
{
	out << "Form: " << rhs.getName() << "\nGrade Sign: " << rhs.getGradeSign()
		<< "\nGrade Execute: " << rhs.getGradeExecute() << "\nSign: "
		<< rhs.getSign() << std::endl;
	return out;
}

void	Form::beSigned( Bureaucrat const & b )
{
	if (b.getGrade() > this->_gradeSign)
	{
		b.signForm(*this);
		throw (GradeTooLowException());
	}
	else
		this->_sign = true;
	b.signForm(*this);
}
