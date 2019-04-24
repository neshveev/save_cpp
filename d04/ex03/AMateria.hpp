#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string	_type;
	unsigned int xp_;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria( AMateria const & rhs );
	AMateria&	operator=( AMateria const & rhs );
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materias XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
