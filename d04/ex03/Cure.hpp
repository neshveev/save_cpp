#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure( Cure const & rhs );
	Cure&	operator=( Cure const & rhs );
	virtual ~Cure();
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
