#ifndef IMINIGLASER_HPP
#define IMINIGLASER_HPP

#include "IAsteroid.hpp"

class DeepCoreMinier;
class StripMiner;

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;
};

#endif
