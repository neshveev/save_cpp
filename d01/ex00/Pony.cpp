/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:42:01 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/04 16:19:09 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Pony.hpp"

Pony::Pony( void )
{
	std::cout << "Pony's name: ";
	std::cin >> this->_name;
	std::cout << "Pony's age: ";
	std::cin >> this->_age;
}

Pony::~Pony( void )
{
	std::cout << "Pony was deleted" << std::endl;
}
