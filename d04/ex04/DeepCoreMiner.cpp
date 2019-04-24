#include "DeepCoreMiner.hpp"
#include <iostream>

DeepCoreMiner::DeepCoreMiner( void )
{
}

DeepCoreMiner::~DeepCoreMiner( void )
{
}

DeepCoreMiner::DeepCoreMiner( DeepCoreMiner const & rhs )
{
	*this = rhs;
}

DeepCoreMiner&	DeepCoreMiner::operator=( DeepCoreMiner const & rhs )
{
	return *this;
}

void	DeepCoreMiner::mine( IAsteroid* ast )
{
	std::cout << "* mining deep ... got " << ast->beMined() << " ! *" << std::endl;	
}

