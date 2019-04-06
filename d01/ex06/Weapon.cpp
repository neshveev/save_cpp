/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:04:17 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 18:23:03 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}

const std::string&	Weapon::getType( void )
{
	return (this->_type);
}
