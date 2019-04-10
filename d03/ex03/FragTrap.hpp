/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:14:29 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 18:58:52 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap( std::string const &name );
	~FragTrap();
	FragTrap( FragTrap const & src );
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
