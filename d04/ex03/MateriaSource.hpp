#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource: public IMateriaSource
{
	AMateria*	_mat[4];
public:
	MateriaSource( void );
	MateriaSource( MateriaSource const & rhs );
	~MateriaSource( void );
	MateriaSource&	operator=( MateriaSource const & rhs );
	AMateria*	getPointer( int index ) const;
	void	learnMateria( AMateria* );
	AMateria*	createMateria( std::string const & type );
};

#endif
