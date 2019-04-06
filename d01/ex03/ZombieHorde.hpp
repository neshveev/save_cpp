/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:03:01 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 14:58:49 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <string>

class ZombieHorde
{
	Zombie	*_horde;
	size_t	_nbZombie;
public:
	ZombieHorde( size_t );
	ZombieHorde( void );
	~ZombieHorde( void );
	void announce( void );
	std::string	randomChump( void );
};

#endif
