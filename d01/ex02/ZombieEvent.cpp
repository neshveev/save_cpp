/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:24:58 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 12:32:10 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType( std::string type )
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie( std::string name )
{
	return (new Zombie(name, this->_type));
}

Zombie	*ZombieEvent::randomChump( void )
{
	Zombie		*zombie;
	std::string	tab[] = {"Max", "Jenya", "Armic"};
	int			index;

	if (this->_type == "no")
		this->setZombieType("foo");
	index = rand() % 3;
	zombie = this->newZombie(tab[index]);
	return (zombie);
}
