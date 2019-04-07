#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed ( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed ( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << _fractionalBits;
	return ;
}

Fixed::Fixed ( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf(value * (1 << _fractionalBits));
	return ;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called" << std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed ( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (this->_fixedPointValue / (float)(1 << _fractionalBits));
}

int	Fixed::toInt( void ) const
{
	return (this->_fixedPointValue >> _fractionalBits);
}

Fixed	&Fixed::operator=( const Fixed &src )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return ( *this );
	this->_fixedPointValue = src.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();
	return (out);
}
