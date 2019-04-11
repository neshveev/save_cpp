/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:30:05 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 20:22:54 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant( void ): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & rhs )
{
	*this = rhs;
}

SuperMutant	&SuperMutant::operator=( SuperMutant const & rhs )
{
	if (this == &rhs)
		return *this;
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
	return *this;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage( int damage )
{
	if (damage < 0)
		return ;
	this->setHP(this->getHP() - damage + 3);
	if (this->getHP() < 0)
		this->setHP(0);
}
