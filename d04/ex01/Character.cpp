/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:44:12 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 14:25:30 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( void )
{
	return ;
}

Character::~Character( void )
{
	return ;
}

Character::Character( std::string const & name ): _name(name)
{
	this->_ap = 40;
	this->_weapon = NULL;
}

Character::Character( Character const & rhs )
{
	*this = rhs;
}

std::string const	Character::getName( void ) const
{
	return this->_name;
}

unsigned int	Character::getAP( void ) const
{
	return this->_ap;
}

AWeapon*	Character::getWeapon( void ) const
{
	return this->_weapon;
}

Character&	Character::operator=( Character const & rhs )
{
	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	return *this;
}

void Character::recoverAP( void )
{
	this->_ap += 10;
	if (this->getAP() > 40)
		this->_ap = 40;
}

void	Character::equip( AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack( Enemy* enemy)
{
	if (this->getWeapon() == NULL ||
			this->getAP() < (this->getWeapon())->getAPCost())
		return ;
	this->_ap -= (this->getWeapon())->getAPCost();
	std::cout << this->getName() << " attacks " << enemy->getType()
		<< " with a " << this->_weapon->getName() << std::endl;
	(this->getWeapon())->attack();
	enemy->takeDamage((this->getWeapon())->getDamage());
	if (enemy->getHP() == 0)
		enemy->~Enemy();
}

std::ostream&	operator<<( std::ostream & out, Character const & rhs )
{
	out << rhs.getName() << " has " << rhs.getAP() << " AP and ";
	if (rhs.getWeapon())
		out << "wields a " << (rhs.getWeapon())->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return out;
}
