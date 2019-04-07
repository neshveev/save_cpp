#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	int	 _fixedPointValue;
	static const int	_fractionalBits;
public:
	Fixed( void );
	Fixed( const int value );
	Fixed( const float value );
	~Fixed( void );
	Fixed ( const Fixed& src );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed	&operator=( const Fixed& src );
};

std::ostream	&operator<<(std::ostream &out, Fixed const &src);

#endif
