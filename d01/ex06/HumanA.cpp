/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:15:33 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 18:33:02 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon ):
	_name(name), _weapon(weapon)
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->_name + " attacks with his " + this->_weapon.getType()
		<< std::endl;
}
