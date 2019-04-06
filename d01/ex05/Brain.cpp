/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:16:48 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 17:25:55 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <sstream>
#include <stdio.h>

Brain::Brain( void )
{
	this->setAdr();
}

Brain::~Brain( void )
{
	return ;
}

void	Brain::setAdr( void )
{
	std::stringstream	buff;

	buff << this;
	this->_adr = buff.str();
}

std::string	Brain::identify( void )
{
	return (this->_adr);
}
