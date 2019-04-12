/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:59:51 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 13:13:50 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle( void ): AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}

PlasmaRifle	&PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	if (this == &rhs)
		return *this;
	AWeapon::operator=(rhs);
	return *this;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & rhs )
{
	*this = rhs;
}

void	PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
