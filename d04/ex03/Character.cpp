#include "Character.hpp"
#include <string>

Character::Character( void )
{}

Character::Character( std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

Character::Character( Character const & rhs )
{
	*this = rhs;
}

Character::~Character( void )
{
}

AMateria*	Character::getPointer( int index ) const
{
	if (index < 0 || index > 3)
		return 0;
	return this->_mat[index];
}

std::string const &	Character::getName( void ) const
{
	return this->_name;
}

Character&	Character::operator=( Character const & rhs )
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		delete this->getPointer(i);
		this->_mat[i] = rhs.getPointer(i);
	}
	this->_name = rhs.getName();
	return *this;
}

void	Character::equip( AMateria* m )
{
	int	i;

	i = 0;
	while (i < 4 && this->getPointer(i))
		i++;
	if (i == 4)
		return ;
	this->_mat[i] = m;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->getPointer(0) == NULL)
		return ;
	this->_mat[idx] = NULL;
	for (int i = idx; i < 3; i++)
	{
		this->_mat[idx] = this->_mat[idx + 1];
		this->_mat[idx + 1] = NULL;
	}
}

void	Character::use( int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	(this->getPointer(idx))->use(target);
}

