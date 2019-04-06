/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:42:28 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/06 15:48:34 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human	human;
	std::string	target;

	target = "Fire";

	human.action("meleeAttack", target);
	human.action("rangedAttack", target);
	human.action("intimidatingShout", target);
	human.action("foo", target);
	return (0);
}
