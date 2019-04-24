#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice( Ice const & rhs );
	Ice&	operator=( Ice const & rhs );
	virtual ~Ice();
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
