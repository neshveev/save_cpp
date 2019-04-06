/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:39:05 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 12:33:12 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>
#include <iostream>

int		main()
{
	Zombie		*e1;
	Zombie		e2;
	std::string	name;
	std::string	type;
	ZombieEvent	event;

	std::cout << "Now we create a zombie on the stack with your params" << std::endl;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Type: ";
	std::cin >> type;
	e2.setParams(name, type);
	e2.announce();
	
	std::cout << "Now we create a zombie on the heap with our random name" << std::endl;
	std::cout << "You can chose type... or not. If not write \"no\"" << std::endl;
	std::cout << "Type: ";
	std::cin >> type;
	event.setZombieType(type);
	e1 = event.randomChump();
	e1->announce();
	delete e1;

	return (0);
}

