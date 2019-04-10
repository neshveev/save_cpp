/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:11:17 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 18:58:52 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap( std::string const &name );
	~ScavTrap();
	ScavTrap( ScavTrap const & src );
	void	challengeNewcomer(std::string const & target);
};

#endif
