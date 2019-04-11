/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:30:05 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 20:28:22 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion( void ): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & rhs )
{
	*this = rhs;
}

RadScorpion	&RadScorpion::operator=( RadScorpion const & rhs )
{
	if (this == &rhs)
		return *this;
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
	return *this;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
}
