/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:53:01 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 15:42:20 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack: " +  target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack: " +  target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout: " +  target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string	p[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void	(Human::*fptr[3])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout};
	size_t	index;

	index = 0;
	while (index < 3 && p[index] != action_name)
		index++;
	if (index == 3)
	{
		std::cout << "wrong name of the function" << std::endl;
		return ;
	}
	(this->*fptr[index])(target);
}
