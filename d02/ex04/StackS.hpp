#ifndef STACKS_HPP
# define STACKS_HPP

#include <string>

class StackS
{
	std::string	*_stack;
	size_t		_size;
public:
	StackS( void );
	~StackS (void );
	void	push( std::string );
	std::string	pop( void );
	std::string	at( void );
};

#endif
