/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:39:05 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 14:58:48 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

void	create(size_t nb)
{
	ZombieHorde		e1 = ZombieHorde::ZombieHorde(nb);

	e1.announce();
}

void	create()
{
	ZombieHorde		e2;

	e2.announce();
}

int		main()
{
	size_t			nb;

	std::cout << "Enter nb zombie: ";
	std::cin >> nb;
	create(nb);
	create();
	return (0);
}

