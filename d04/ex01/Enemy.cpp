/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:15:02 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 20:23:14 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return ;
}

Enemy::Enemy( int hp, std::string const & type ): _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy( Enemy const & rhs )
{
	*this = rhs;
}

Enemy::~Enemy( void )
{
	return ;
}

int	Enemy::getHP( void ) const
{
	return this->_hp;
}

std::string const	Enemy::getType( void ) const
{
	return this->_type;
}

void	Enemy::setHP( int const & hp )
{
	this->_hp = hp;
}

void	Enemy::setType( std::string const & type )
{
	this->_type = type;
}

Enemy	&Enemy::operator=( Enemy const & rhs )
{
	if (this == &rhs)
		return *this;
	this->setHP(rhs.getHP());
	this->setType(rhs.getType());
	return *this;
}

void	Enemy::takeDamage( int damage )
{
	if (damage < 0)
		return ;
	this->setHP(this->getHP() - damage);
	if (this->getHP() < 0)
		this->setHP(0);
}
