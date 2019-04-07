#include "Fixed.class.hpp"
#include <iostream>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed ( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
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

Fixed	&Fixed::operator=( const Fixed &src )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return ( *this );
	this->_fixedPointValue = src.getRawBits();
	return (*this);
}
