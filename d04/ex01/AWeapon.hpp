/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:57:33 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/11 18:55:57 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
	int	_apcost;
	int	_damage;
	std::string	_name;
protected:
	AWeapon( void );

public:
	AWeapon( std::string const & name, int apcost, int damage );
	AWeapon( AWeapon const & rhs );
	virtual ~AWeapon();
	AWeapon	&operator=( AWeapon const & rhs );
	void	setName( std::string const & name );
	void	setDamage( int const & damage );
	void	setAPCost( int const & apcost );
	std::string const	getName( void ) const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
