/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:11:17 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 19:40:07 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap( std::string const &name );
	~NinjaTrap();
	NinjaTrap( NinjaTrap const & src );
	void	ninjaShoebox( ClapTrap & obj );
};

#endif
