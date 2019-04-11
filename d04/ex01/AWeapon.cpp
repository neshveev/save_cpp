/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:05:35 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 18:30:05 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	return ;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ):
	_name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon( AWeapon const & rhs )
{
	this->setName(rhs.getName());
	this->setDamage(rhs.getDamage());
	this->setAPCost(rhs.getAPCost());
}

AWeapon::~AWeapon( void )
{
	return ;
}
AWeapon	&AWeapon::operator=( AWeapon const & rhs )
{
	this->setName(rhs.getName());
	this->setDamage(rhs.getDamage());
	this->setAPCost(rhs.getAPCost());
	return *this;
}

std::string const	AWeapon::getName( void ) const
{
	return this->_name;
}

int	AWeapon::getDamage( void ) const
{
	return this->_damage;
}

int	AWeapon::getAPCost( void ) const
{
	return this->_apcost;
}

void	AWeapon::setName( std::string const & name )
{
	this->_name = name;
}

void	AWeapon::setAPCost( int const & apcost )
{
	this->_apcost = apcost;
}

void	AWeapon::setDamage( int const & damage )
{
	this->_damage = damage;
}




