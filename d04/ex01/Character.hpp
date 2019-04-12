/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:38:40 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/12 13:11:33 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <iostream>

class Character
{
private:
	std::string	_name;
	unsigned int	_ap;
	AWeapon	*_weapon;
protected:
	Character( void );
public:
	Character(std::string const & name);
	Character( Character const & rhs );
	~Character();
	Character&	operator=( Character const & rhs );
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	unsigned int	getAP( void ) const;
	AWeapon*	getWeapon( void ) const;
	std::string const	getName( void ) const;
};

std::ostream&	operator<<( std::ostream & out, Character const & rhs );

#endif
