/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:59:52 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 14:38:15 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::setParams(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie()
{
	std::cout << "So sad! Zombie died... twice?" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Shhhhhhhh..."
		<< std::endl;
}
