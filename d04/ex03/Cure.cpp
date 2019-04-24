#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure( Cure const & rhs )
{
	*this = rhs;
}

Cure::Cure( void ) : AMateria::AMateria("cure")
{
}

Cure&       Cure::operator=( Cure const & rhs )
{
	if (this == &rhs)
		return *this;
	AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure( void )
{
	return ;
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure*	Cure::clone( void ) const
{
	return new Cure;
}
