#include "MateriaSource.hpp"
#include <string>
#include "AMateria.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		delete this->_mat[i];
}

MateriaSource::MateriaSource( MateriaSource const & rhs )
{
	*this = rhs;
}

AMateria*	MateriaSource::getPointer( int index ) const
{
	if (index < 0 || index > 3)
		return NULL;
	return this->_mat[index];
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & rhs )
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		delete this->_mat[i];
		this->_mat[i] = rhs.getPointer(i);	
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* obj )
{
	int	i;

	i = 0;
	while (i < 4 && this->getPointer(i))
		i++;
	if (i == 4)
		return ;
	this->_mat[i] = obj;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4 && this->getPointer(i); i++)
		if (((this->_mat[i])->getType()).compare(type) == 0)
			return this->_mat[i];
	return NULL;
}
