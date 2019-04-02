/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:18:21 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/02 20:15:11 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.class.hpp"
# define SIZE 8

static void	process_add(Contact *phone, size_t *i)
{
	if (*i >= SIZE)
		std::cout << "Too many contacts" << std::endl;
	else
	{
		phone[*i].inputContact();
		*i += 1;
	}
}

static void	process_search(Contact *phone, size_t i)
{
	size_t	index;

	if (i == 0)
	{
		std::cout << "Phone book is empty" << std::endl;
		return ;
	}
	for (size_t index = 0; index < i; index++)
		phone[index].printShortContact(index);
	std::cout << "Enter index: ";
	std::cin >> index;
	if (!std::cin)
	{
		std::cout << "It is not number! Try again" << std::endl;
		std::cin.clear();
		return ;
	}
	if (index >= i)
		std::cout << "Wrong index" << std::endl;
	else
		phone[index].printContact();	
}

int		main(void)
{
	std::string		comand;
	Contact			phone[SIZE];
	static size_t	i;

	while (1)
	{
		std::cin >> comand;
		if (comand.compare("ADD") == 0)
			process_add(phone, &i);
		else if (comand.compare("SEARCH") == 0)
			process_search(phone, i);
		else if (comand.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Possible comands: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
