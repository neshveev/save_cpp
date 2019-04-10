/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:17:34 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 17:03:04 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap( void )
{
	std::cout << "Default constructor" << std::endl;
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
	std::cout << "Name constructor" << std::endl;
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
	std::cout << "Destructor for " + this->_name << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "Copy constructor" << std::endl;
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

FragTrap	&FragTrap::operator=( FragTrap const & src )
{
	std::cout << "Operator=" << std::endl;
	if (this == &src)
		return (*this);
	this->_hitPoints = src._hitPoints;
	this->_maxHitValue = src._maxHitValue;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_level = src._level;
	this->_meleeAttackDamage = src._meleeAttackDamage;
	this->_rangedAttackDamage = src._rangedAttackDamage;
	this->_armorDamageReduction = src._armorDamageReduction;
	this->_name = src._name;
	return (*this);
}

void	FragTrap::rangedAttack( std::string const & target )
{
	std::cout << "FR4G-TP " + this->_name + " attacks " +
		target + " at range, causing " << this->_rangedAttackDamage
		<< " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack( std::string const & target )
{
	std::cout << "FR4G-TP " + this->_name + " attacks " +
		target + " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage !" << std::endl;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	std::cout << "FR4G-TP " + this->_name + "take " << amount
		<< " points of damage !" << std::endl;
	if (this->_armorDamageReduction >= amount)
		amount = 0;
	else
		amount -= this->_armorDamageReduction;
	if (this->_hitPoints <= amount)
	{
		this->_hitPoints = 0;
		std::cout << "FR4G-TP " + this->_name + " died..." << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "FR4G-TP " + this->_name + "'s health is " <<
		   this->_hitPoints	<< "points" << std::endl;
	}
}

void	FragTrap::beRepaired( unsigned int amount )
{
	std::cout << "FR4G-TP " + this->_name + "be repaired " << amount
		<< " points!" << std::endl;
	if (this->_hitPoints + amount > this->_maxHitValue)
	{
		this->_hitPoints = 100;
		std::cout << "FR4G-TP " + this->_name + "'s HP is " << this->_hitPoints
		<< " points!" << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		std::cout << "FR4G-TP " + this->_name + "'s HP is " << this->_hitPoints
		<< " points!" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[5] =
						{"rocket", "grenade", "laser", "mad pups", "pickle"};
	size_t		index;

	index = rand() % 5;
	if (this->_energyPoints >= 25)
	{
		std::cout << "FR4G-TP " + this->_name + " attacks " +
			target + " at " + attack[index] + " !" << std::endl;
		this->_energyPoints -= 25;
	}
	else
		std::cout << "Energy points - " << this->_energyPoints << "! Sorry(" <<
			std::endl;
}
