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

	bool	operator==( const Fixed &src ) const;
	bool	operator!=( const Fixed &src ) const;
	bool	operator>( const Fixed &src ) const;
	bool	operator>=( const Fixed &src ) const;
	bool	operator<( const Fixed &src ) const;
	bool	operator<=( const Fixed &src ) const;

	Fixed	operator+( const Fixed &src );
	Fixed	operator-( const Fixed &src );
	Fixed	operator*( const Fixed &src );
	Fixed	operator/( const Fixed &src );

	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );

	static Fixed	min( Fixed &o1, Fixed &o2 );
	static Fixed	max( Fixed &o1, Fixed &o2 );
	static Fixed const	min( Fixed const &o1, Fixed const &o2 );
	static Fixed const	max( Fixed const &o1, Fixed const &o2 );
};

std::ostream	&operator<<(std::ostream &out, Fixed const &src);

#endif
