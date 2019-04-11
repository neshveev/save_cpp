/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:07:22 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 20:29:13 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include <iostream>

int main()
{
	PlasmaRifle	a;
	PowerFist	b;

	a.attack();
	b.attack();

	SuperMutant	x;
	RadScorpion	y;

	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	y.takeDamage(50);
	y.takeDamage(50);
	y.takeDamage(50);
	y.takeDamage(50);




	return 0;
}
