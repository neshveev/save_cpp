/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:34:39 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/10 19:43:01 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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

	ScavTrap	rr("rr");
	ScavTrap	dd("dd");

	ScavTrap	rr2(rr);
	ScavTrap	dd2;

	dd2 = dd;

	rr.rangedAttack("dd");
	dd.takeDamage(20);

	dd.meleeAttack("rr");
	rr.takeDamage(30);

	rr.challengeNewcomer("dd");
	rr.challengeNewcomer("dd");
	rr.challengeNewcomer("dd");
	rr.challengeNewcomer("dd");
	rr.challengeNewcomer("dd");

	dd.beRepaired(80);


	dd.meleeAttack("rr");
	rr.takeDamage(30);
	dd.meleeAttack("rr");
	rr.takeDamage(30);
	dd.meleeAttack("rr");
	rr.takeDamage(30);

	NinjaTrap	nija1("nija1");
	NinjaTrap	nija2("nija2");

	nija1.ninjaShoebox(nija2);
	nija1.ninjaShoebox(alpaca);
	nija1.ninjaShoebox(rr);




	return (0);



}
