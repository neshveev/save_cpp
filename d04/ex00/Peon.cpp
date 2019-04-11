/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:40:41 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 17:48:27 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( void )
{
	return ;
}

Peon::Peon( std::string name ): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( Peon const & rhs ): Victim(rhs)
{
	return ;
}

Peon	&Peon::operator=( Peon const & rhs )
{
	if (this == &rhs)
		return (*this);
	this->setName(rhs.getName());
	return (*this);
}

void	Peon::getPolymorphed( void ) const
{
	std::cout << this->getName()
		<< " has been turned into a pink pony !" << std::endl;
}
