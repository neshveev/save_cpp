/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:17:34 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 18:58:57 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap( void )
{
	std::cout << "FRAGG::Default constructor" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitValue = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}

FragTrap::FragTrap( std::string const & name )
{
	std::cout << "FRAGG::Name constructor" << std::endl;
	this->_hitPoints = 100;
	this->_maxHitValue = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_name = name;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FRAGG::Destructor for " + this->_name << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "FRAGG::Copy constructor" << std::endl;
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[5] =
						{"rocket", "grenade", "laser", "mad pups", "pickle"};
	size_t		index;

	index = rand() % 5;
	if (this->_energyPoints >= 25)
	{
		std::cout << "FRAGG::FR4G-TP " + this->_name + " attacks " +
			target + " at " + attack[index] + " !" << std::endl;
		this->_energyPoints -= 25;
	}
	else
		std::cout << "FRAGG::Energy points - " << this->_energyPoints << "! Sorry(" <<
			std::endl;
}
