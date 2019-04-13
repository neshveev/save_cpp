#include "TacticalMarine.hpp"
#include <iostream>
#include <string>

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & rhs )
{
	*this = rhs;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine& TacticalMarine::operator=( TacticalMarine const & rhs )
{
	(void)rhs;
	return *this;
}

ISpaceMarine*   TacticalMarine::clone( void ) const
{
	return (new TacticalMarine);
}

void    TacticalMarine::battleCry( void ) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void    TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void    TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

