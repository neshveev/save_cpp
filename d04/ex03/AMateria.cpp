#include "AMateria.hpp"
#include <string>
#include <cctype>

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	this->xp_ = 0;
}

AMateria::AMateria( AMateria const & rhs )
{
	*this = rhs;
}

AMateria::AMateria( void )
{
	this->_type = "";
	this->xp_ = 0;
}

AMateria&       AMateria::operator=( AMateria const & rhs )
{
	if (this == &rhs)
		return *this;
	this->xp_ = rhs.getXP();
	this->_type = rhs.getType();
	return *this;
}

AMateria::~AMateria( void )
{
	return ;
}

std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}

unsigned int	AMateria::getXP( void ) const
{
	return this->xp_;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	this->xp_ += 10;
}

