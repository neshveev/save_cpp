/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:17:34 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 18:58:58 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap( void )
{
	std::cout << "SCAV::Default constructor" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitValue = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

ScavTrap::ScavTrap( std::string const & name )
{
	std::cout << "SCAV::Name constructor" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitValue = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_name = name;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "SCAV::Destructor for " + this->_name << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "SCAV::Copy constructor" << std::endl;
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

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	attack[5] =
						{"fooo", "booo", "qooo", "nooo", "mooo"};
	size_t		index;

	index = rand() % 5;
	if (this->_energyPoints >= 25)
	{
		std::cout << "SCAV::FR4G-TP " + this->_name + " attacks " +
			target + " at " + attack[index] + " !" << std::endl;
		this->_energyPoints -= 25;
	}
	else
		std::cout << "SCAV::Energy points - " << this->_energyPoints << "! Sorry(" <<
			std::endl;
}
