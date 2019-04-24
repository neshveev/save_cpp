#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed ( void )
{
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed ( const int value )
{
	this->_fixedPointValue = value << _fractionalBits;
	return ;
}

Fixed::Fixed ( const float value )
{
	this->_fixedPointValue = (int)roundf(value * (1 << _fractionalBits));
	return ;
}

Fixed::~Fixed ( void )
{
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed ( const Fixed &src )
{
	*this = src;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
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
	if (this == &src)
		return ( *this );
	this->_fixedPointValue = src.getRawBits();
	return (*this);
}

bool	Fixed::operator==( const Fixed &src ) const
{
	return (this->_fractionalBits == src.getRawBits());
}

bool	Fixed::operator!=( const Fixed &src ) const
{
	return (this->_fractionalBits != src.getRawBits());
}

bool	Fixed::operator>( const Fixed &src ) const
{
	return (this->_fractionalBits > src.getRawBits());
}

bool	Fixed::operator>=( const Fixed &src ) const
{
	return (this->_fractionalBits >= src.getRawBits());
}

bool	Fixed::operator<( const Fixed &src ) const
{
	return (this->_fractionalBits < src.getRawBits());
}

bool	Fixed::operator<=( const Fixed &src ) const
{
	return (this->_fractionalBits <= src.getRawBits());
}

Fixed	Fixed::operator+( const Fixed &src )
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + src.getRawBits());
	return (res);
}

Fixed	Fixed::operator-( const Fixed &src )
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - src.getRawBits());
	return (res);
}

Fixed	Fixed::operator*( const Fixed &src )
{
	Fixed	res;

	res.setRawBits((this->getRawBits() * src.getRawBits()) >> _fractionalBits);
	return (res);
}

Fixed	Fixed::operator/( const Fixed &src )
{
	Fixed	res;

	res.setRawBits((this->getRawBits() << _fractionalBits) / src.getRawBits());
	return (res);
}

Fixed	&Fixed::operator++( void )
{
	this->_fixedPointValue += 1;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	res(*this);

	this->_fixedPointValue += 1;
	return (res);
}

Fixed	&Fixed::operator--( void )
{
	this->_fixedPointValue -= 1;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	res(*this);

	this->_fixedPointValue -= 1;
	return (res);
}

Fixed	Fixed::min( Fixed &o1, Fixed &o2 )
{
	return (o1 < o2 ? o1 : o2);
}

Fixed	Fixed::max( Fixed &o1, Fixed &o2 )
{
	return (o1 > o2 ? o1 : o2);
}

Fixed const	Fixed::min( Fixed const &o1, Fixed const &o2 )
{
	return (o1 < o2 ? o1 : o2);
}

Fixed const	Fixed::max( Fixed const &o1, Fixed const &o2 )
{
	return (o1 > o2 ? o1 : o2);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();
	return (out);
}
