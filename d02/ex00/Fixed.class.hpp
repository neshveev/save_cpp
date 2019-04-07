#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

class Fixed
{
	int	 _fixedPointValue;
	static const int	_fractionalBits;
public:
	Fixed( void );
	~Fixed( void );
	Fixed ( const Fixed& src );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed	&operator=( const Fixed& src );
};

#endif
