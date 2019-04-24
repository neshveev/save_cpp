#ifndef IASTEROID_HPP
#define IASTEROID_HPP

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined([...] *) const = 0;
	virtual std::string getName() const = 0;
};

#endif
