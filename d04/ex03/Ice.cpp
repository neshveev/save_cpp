#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice( Ice const & rhs )
{
	*this = rhs;
}

Ice::Ice( void ) : AMateria::AMateria("ice")
{
}

Ice&       Ice::operator=( Ice const & rhs )
{
	if (this == &rhs)
		return *this;
	AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice( void )
{
	return ;
}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice*	Ice::clone( void ) const
{
	return new Ice;
}
