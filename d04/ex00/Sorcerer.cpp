/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:54:56 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 17:12:07 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer( void )
{
	return ;
}

Sorcerer::Sorcerer( std::string const & name, std::string const & title ):
	_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !"
		<< std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & rhs )
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	std::cout << "COPY::" << this->_name << ", " << this->_title
		<< ", is born !" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title
		<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator=( Sorcerer const & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

std::string	Sorcerer::getName( void ) const
{
	return (this->_name);
}

std::string Sorcerer::getTitle( void ) const
{
	return (this->_title);
}

std::ostream	&operator<<( std::ostream & out, Sorcerer const & rhs )
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies !" << std::endl;
	return (out);
}

void	Sorcerer::polymorph(Victim const & rhs) const
{
	rhs.getPolymorphed();
}
