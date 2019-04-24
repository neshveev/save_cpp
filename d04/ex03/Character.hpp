#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character: public ICharacter
{
	AMateria*	_mat[4];
	std::string	_name;
protected:
	Character( void );
public:
	Character( std::string const & name );
	~Character( void );
	Character( Character const & rhs );
	Character&	operator=( Character const & rhs );
	std::string const&	getName(  void ) const;
	AMateria*	getPointer( int index ) const;
	void	equip(AMateria* m);
	void	unequip( int index );
	void	use( int index, ICharacter& target );
};

#endif
