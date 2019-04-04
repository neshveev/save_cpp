/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:03:45 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/04 16:19:10 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap(void)
{
	Pony	*p1;

	p1 = new Pony;
	std::cout << "Pony was created on the heap" << std::endl;
	delete p1;
}

void	ponyOnTheStack(void)
{
	Pony	p2;
	
	std::cout << "Pony was created on the stack" << std::endl;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
