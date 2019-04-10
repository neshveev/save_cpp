/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:14:29 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 16:57:55 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
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
	FragTrap();
	FragTrap( std::string const &name );
	~FragTrap();
	FragTrap( FragTrap const & src );
	FragTrap	&operator=( FragTrap const & src );
	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
