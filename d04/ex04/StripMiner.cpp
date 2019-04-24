#include "StripMiner.hpp"
#include <iostream>

StripMiner::StripMiner( void )
{}

StripMiner::StripMiner( StripMiner const & rhs )
{
	*this = rhs;
}

StripMiner&	StripMiner::operator=( StripMiner const & rhs )
{
	return *this;
}

StripMiner::~StripMiner( void )
{}

void	StripMiner::mine( IAsteroid* ast )
{
	std::cout << "* mining deep ... got " << ast->beMined() << " ! *" << std::endl;
}
