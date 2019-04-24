#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
public:
	StripMiner( void );
	StripMiner( StripMiner const & rhs );
	StripMiner&	operator=( StripMiner const & rhs );
	~StripMiner( void );


	void	mine( IAsteroid* );
};

#ifndef
