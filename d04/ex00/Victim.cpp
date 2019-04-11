/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:40:41 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 17:46:31 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void )
{
	return ;
}

Victim::Victim( std::string name ): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !"
	   << std::endl;
}

std::string	Victim::getName( void ) const
{
	return (this->_name);
}

void	Victim::setName( std::string const & name )
{
	this->_name = name;
}
Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name
		<< " just died for no apparent reason !" << std::endl;
}

Victim::Victim( Victim const & rhs )
{
	this->_name = rhs.getName();
}

Victim	&Victim::operator=( Victim const & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	return (*this);
}

std::ostream	&operator<<( std::ostream & out, Victim const & rhs )
{
	out << "I m " << rhs.getName() << " and I like otters !" << std::endl;
	return (out);
}

void	Victim::getPolymorphed( void ) const
{
	std::cout << this->getName()
		<< " has been turned into a cute little sheep !"
		<< std::endl;
}
