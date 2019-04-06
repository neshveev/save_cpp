/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:06:14 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 14:57:34 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde( void )
{
	std::cout << "\tconstructor void" << std::endl;
	this->_horde = NULL;
	this->_nbZombie = 0;
	return ;
}

ZombieHorde::~ZombieHorde( void )
{
	std::cout << "Kill ZombieHorde" << std::endl;
	this->_nbZombie = 0;
	delete[] this->_horde;
	return ;
}

ZombieHorde::ZombieHorde( size_t n )
{
	std::cout << "\tconstructor size_t" << std::endl;
	this->_horde = new Zombie[n];
	this->_nbZombie = n;
	for (size_t i = 0; i < n; i++)
		this->_horde[i].setParams(this->randomChump(), "foo");
	return ;
}

void	ZombieHorde::announce( void )
{
	if (this->_nbZombie == 0)
		std::cout << "No zombies" << std::endl;
	else
		for (size_t i = 0; i < this->_nbZombie; i++)
			this->_horde[i].announce();
}

std::string	ZombieHorde::randomChump( void )
{
	std::string	tab[] = {"Max", "Jenya", "Armic"};
	int			index;

	index = rand() % 3;
	return (tab[index]);
}
