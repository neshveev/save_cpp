/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:22:22 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/04 16:24:42 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string*        panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int	main(void)
{
	memoryLeak();
	return (0);
}
