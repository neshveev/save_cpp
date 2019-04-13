#include "AssaultTerminator.hpp"
#include <iostream>
#include <string>

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & rhs )
{
	*this = rhs;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	(void)rhs;
	return *this;
}

ISpaceMarine*   AssaultTerminator::clone( void ) const
{
	return (new AssaultTerminator);
}

void    AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void    AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
}

void    AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

