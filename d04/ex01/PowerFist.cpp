/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:59:51 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 14:04:51 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist( void ): AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist( void )
{
	return ;
}

PowerFist	&PowerFist::operator=( PowerFist const & rhs )
{
	if (this == &rhs)
		return *this;
	this->setName(rhs.getName());
	this->setAPCost(rhs.getAPCost());
	this->setDamage(rhs.getDamage());
	return *this;
}

PowerFist::PowerFist( PowerFist const & rhs )
{
	*this = rhs;
}

void	PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
