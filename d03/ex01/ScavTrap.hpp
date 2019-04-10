/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:11:17 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 18:01:28 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
	unsigned int	_hitPoints;
	unsigned int	_maxHitValue;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;

public:
	ScavTrap();
	ScavTrap( std::string const &name );
	~ScavTrap();
	ScavTrap( ScavTrap const & src );
	ScavTrap	&operator=( ScavTrap const & src );
	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	challengeNewcomer(std::string const & target);
};

#endif
