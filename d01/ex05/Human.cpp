/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:27:45 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/05 17:25:59 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <string>

Human::Human( void )
{
	return ;
}

Human::~Human( void )
{
	return ;
}

Brain	Human::getBrain( void )
{
	return (this->_brain);
}

std::string	Human::identify( void )
{
	std::string	res;

	res = this->_brain.identify();
	return (res);
}
