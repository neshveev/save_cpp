#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner( void );
	DeepCoreMiner( DeepCoreMiner const & rhs );
	DeepCoreMiner&	operator=( DeepCoreMiner const & rhs );
	~DeepCoreMiner( void );


	void	mine( IAsteroid* );
};

#ifndef
