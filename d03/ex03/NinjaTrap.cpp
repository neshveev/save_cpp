/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:17:34 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 19:40:09 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

#include <string>
#include <iostream>

NinjaTrap::NinjaTrap( void )
{
	std::cout << "NINJA::Default constructor" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitValue = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap( std::string const & name )
{
	std::cout << "NINJA::Name constructor" << std::endl;
	this->_hitPoints = 60;
	this->_maxHitValue = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_name = name;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "NINJA::Destructor for " + this->_name << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
	std::cout << "NINJA::Copy constructor" << std::endl;
	this->_hitPoints = src._hitPoints;
	this->_maxHitValue = src._maxHitValue;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_level = src._level;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	this->_name = src._name;
}

void	NinjaTrap::ninjaShoebox( ClapTrap & obj )
{
	std::string	attack[5] =
						{"fooo", "booo", "qooo", "nooo", "mooo"};
	size_t		index;

	index = rand() % 5;
	if (this->_energyPoints >= 25)
	{
		std::cout << "NINJA::FR4G-TP " + this->_name + " attacks " +
			obj._name + " at " + attack[index] + " !" << std::endl;
		this->_energyPoints -= 25;
	}
	else
		std::cout << "NINJA::Energy points - " << this->_energyPoints << "! Sorry(" <<
			std::endl;
}
