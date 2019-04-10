/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:34:39 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 16:56:58 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	alpaca("Alpaca");
	FragTrap	capybara("Capybara");

	FragTrap	alpaca2(alpaca);
	FragTrap	capybara2;

	capybara2 = capybara;

	alpaca.rangedAttack("capybara");
	capybara.takeDamage(20);

	capybara.meleeAttack("alpaca");
	alpaca.takeDamage(30);

	alpaca.vaulthunter_dot_exe("capybara");
	alpaca.vaulthunter_dot_exe("capybara");
	alpaca.vaulthunter_dot_exe("capybara");
	alpaca.vaulthunter_dot_exe("capybara");
	alpaca.vaulthunter_dot_exe("capybara");
	alpaca.vaulthunter_dot_exe("capybara");

	capybara.beRepaired(80);


	capybara.meleeAttack("alpaca");
	alpaca.takeDamage(30);
	capybara.meleeAttack("alpaca");
	alpaca.takeDamage(30);
	capybara.meleeAttack("alpaca");
	alpaca.takeDamage(30);

	return (0);



}
