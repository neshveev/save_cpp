/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:17:34 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 18:58:56 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

ClapTrap::ClapTrap( void )
{
	std::cout << "CLAP::Default constructor" << std::endl;
	this->_hitPoints = 0;
	this->_maxHitValue = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_level = 0;
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "CLAP::Destructor for " + this->_name << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "CLAP::Copy constructor" << std::endl;
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

ClapTrap	&ClapTrap::operator=( ClapTrap const & src )
{
	std::cout << "CLAP::Operator=" << std::endl;
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

void	ClapTrap::rangedAttack( std::string const & target )
{
	std::cout << "CLAP::FR4G-TP " + this->_name + " attacks " +
		target + " at range, causing " << this->_rangedAttackDamage
		<< " points of damage !" << std::endl;
}

void	ClapTrap::meleeAttack( std::string const & target )
{
	std::cout << "CLAP::FR4G-TP " + this->_name + " attacks " +
		target + " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "CLAP::FR4G-TP " + this->_name + "take " << amount
		<< " points of damage !" << std::endl;
	if (this->_armorDamageReduction >= amount)
		amount = 0;
	else
		amount -= this->_armorDamageReduction;
	if (this->_hitPoints <= amount)
	{
		this->_hitPoints = 0;
		std::cout << "CLAP::FR4G-TP " + this->_name + " died..." << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "CLAP::FR4G-TP " + this->_name + "'s health is " <<
		   this->_hitPoints	<< "points" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "CLAP::FR4G-TP " + this->_name + "be repaired " << amount
		<< " points!" << std::endl;
	if (this->_hitPoints + amount > this->_maxHitValue)
	{
		this->_hitPoints = 100;
		std::cout << "CLAP::FR4G-TP " + this->_name + "'s HP is " << this->_hitPoints
		<< " points!" << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		std::cout << "CLAP::FR4G-TP " + this->_name + "'s HP is " << this->_hitPoints
		<< " points!" << std::endl;
	}
}
